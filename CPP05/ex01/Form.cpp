#include "Form.hpp"

Form::Form()
{
  std::cout << "Form Default Constructor Called" << std::endl;
  this->name = "";
  this->setGrade(this->grade_to_sign, 150);
  this->signature = false;
}

Form::Form( std::string name, const unsigned int gradeS, const unsigned int gradeE )
{
  std::cout << "Form Initialized Constructor Called" << std::endl;
  this->name = name;
  this->setGrade( this->grade_to_sign, gradeS );
  this->signature = false;
}

Form::Form( const Form & src )
{
  std::cout << "Form Copy Constructor Called" << std::endl;
  this->name = src.getName();
  this->setGrade(this->grade_to_sign, src.getGradeToSign() );
  this->signature = src.getSignature();
}

Form::~Form()
{
  std::cout << "Form Destructor Called" << std::endl;
}

Form & Form::operator=( const Form & rhs )
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->setGrade( this->grade_to_sign, rhs.getGradeToSign() );
		this->signature = rhs.getSignature();
	}
	return *this;
}

const bool Form::getSignature() const
{
  return this->signature;
}

const std::string Form::getName() const
{
  return this->name;
}

const unsigned int Form::getGradeToSign() const
{
  return this->grade_to_sign;
}


const char * Form::GradeTooHighException::what() const throw()
{
  return "Form Grade Too High";
}

const char * Form::GradeTooLowException::what() const throw()
{
  return "Form Grade Too Low";
}

const char * Form::AlreadySignedException::what() const throw()
{
  return "Already Signed";
}

std::ostream & operator<<( std::ostream & o, const Form & f )
{
  o << f.getName() << ", Form grade to be signed " << f.getGradeToSign();

  return o;
}

void Form::setGrade( unsigned int &old, unsigned int grade )
{
  if (grade > 150)
	throw Form::GradeTooLowException();
  else if (grade < 1)
	throw Form::GradeTooHighException();
  else
	old = grade;
}

void Form::beSigned(Bureaucrat &signer)
{
	if (this->getSignature() == 1)
		throw Form::AlreadySignedException();
	else if (signer.getGrade() > this->getGradeToSign())
		throw Form::GradeTooHighException();
	else
		this->signature = true;
}
