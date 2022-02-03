#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  std::cout << "Bureaucrat Default Constructor Called" << std::endl;
  this->name = "";
  this->setGrade(150);
}

Bureaucrat::Bureaucrat( std::string name, const unsigned int grade )
{
  std::cout << "Bureaucrat Initialized Constructor Called" << std::endl;
  this->name = name;
  this->setGrade( grade );
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
  std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
  this->name = src.getName();
  this->setGrade( src.getGrade() );
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
  if (this != &rhs)
  {
    this->name = rhs.getName();
    this->setGrade( rhs.getGrade() );
  }
  return *this;
}

const std::string Bureaucrat::getName() const
{
  return this->name;
}

const unsigned int Bureaucrat::getGrade() const
{
  return this->grade;
}

void Bureaucrat::incrementGrade( unsigned int to_increment )
{
  this->setGrade(this->grade - to_increment);
}

void Bureaucrat::decrementGrade( unsigned int to_decrement )
{
  this->setGrade(this->grade + to_decrement);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
  return "Bureaucrat Grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
  return "Bureaucrat Grade Too Low";
}

std::ostream & operator<<( std::ostream & o, const Bureaucrat & b )
{
  o << b.getName() << ", bureaucrat grade " << b.getGrade();

  return o;
}

void Bureaucrat::setGrade( unsigned int grade )
{
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    this->grade = grade;
}

void Bureaucrat::signForm(Form &to_sign)
{
  try
  {
    to_sign.beSigned(*this);
    std::cout << this->getName() << " signs " << to_sign.getName() << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cerr << this->getName() << " cannot sign " << to_sign.getName();
    std::cerr << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm( const Form & form )
{
  try
  {
    form.execute(*this);
    std::cout << "Form successfully executed" << std::endl;
  }
  catch (const std::exception & e)
  {
    std::cerr << this->getName() << " cannot execute " << form.getName();
    std::cerr << " because " << e.what() << std::endl;
  }
}
