#include "Form.hpp"

Form::Form() : name(""), grade_to_sign(150), grade_to_execute(150), signature(false)
{
  std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form( std::string name, const unsigned int gradeS, const unsigned int gradeE ) : name(name), grade_to_sign(gradeS), grade_to_execute(gradeE), signature(false)
{
  std::cout << "Form Initialized Constructor Called" << std::endl;
  this->checkGrade( gradeS );
  this->checkGrade( gradeE );
}

Form::Form( const Form & src ) : name(src.getName()), grade_to_sign(src.getGradeToSign()), grade_to_execute(src.getGradeToExecute()), signature(src.getSignature())
{
  std::cout << "Form Copy Constructor Called" << std::endl;
}

Form::~Form()
{
  std::cout << "Form Destructor Called" << std::endl;
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

const unsigned int Form::getGradeToExecute() const
{
  return this->grade_to_execute;
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

void Form::checkGrade( unsigned int grade )
{
  if (grade > 150)
	  throw Form::GradeTooLowException();
  else if (grade < 1)
	  throw Form::GradeTooHighException();
}

void Form::beSigned(Bureaucrat &signer)
{
	if (this->getSignature() == true)
		throw Form::AlreadySignedException();
	else if (signer.getGrade() > this->getGradeToSign())
		throw Form::GradeTooHighException();
	else
		this->signature = true;
}
