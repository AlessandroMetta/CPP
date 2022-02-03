#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "PresidentialPardonForm", 25, 5 )
{
  std::cout << "PresidentialPardonForm Initialized Constructor Called" << std::endl;
  this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form( "PresidentialPardonForm", 25, 5 )
{
  std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
  this->target = src.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

const std::string PresidentialPardonForm::getTarget() const
{
  return this->target;
}

void PresidentialPardonForm::execute ( const Bureaucrat & executer) const
{
  if (this->getSignature() == 0)
	throw Form::NotSignedException();
  else if (executer.getGrade() > this->getGradeToExec())
	throw Form::GradeTooHighException();
  std::cout << this->getTarget() << " has been perdoned by Zafod Beeblebrox" << std::endl;
  std::cout << "AND THE NEXT TIME SHOW SOME RESPECT TO THE PRESIDENT OF THE GALAXY!" << std::endl;
}
