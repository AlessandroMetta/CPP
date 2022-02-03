#include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137)
{
  std::cout << "ShrubberyCreationForm Initialized Constructor Called" << std::endl;
  this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExec())
{
  std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
  this->target = src.getTarget();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
  if (this != &rhs)
	this->target = rhs.getTarget();
  return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

const std::string ShrubberyCreationForm::getTarget() const
{
  return this->target;
}

void ShrubberyCreationForm::execute ( const Bureaucrat & executer) const
{
  if (this->getSignature() == 0)
	throw Form::NotSignedException();
  else if (executer.getGrade() > this->getGradeToExec())
	throw Form::GradeTooHighException();
  std::string filename;
  filename = this->getTarget() + "_shrubbery";
  std::ofstream fd(filename.c_str());
  if (fd.is_open())
  {
	  fd << "       _-_" << std::endl;
	  fd << "    /~~   ~~\\" << std::endl;
	  fd << " /~~         ~~\\" << std::endl;
	  fd << "{               }" << std::endl;
	  fd << " \\  _-     -_  /" << std::endl;
	  fd << "   ~  \\\\ //  ~" << std::endl;
	  fd << "_- -   | | _- _" << std::endl;
	  fd << "  _ -  | |   -_" << std::endl;
	  fd << "_______| |_____" << std::endl;
	  fd.close();
  }
}
