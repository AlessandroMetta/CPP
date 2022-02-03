#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
  Intern intern;
  Bureaucrat gigi("Gigi", 1);

  std::cout << "-----------PRES-------------" << std::endl;

  Form * form = intern.makeForm("presidential pardon", "deca");
  gigi.signForm(*form);
  gigi.executeForm(*form);
  delete form;

  form = intern.makeForm("robotomy request", "deca");
  gigi.signForm(*form);
  gigi.executeForm(*form);
  delete form;

  form = intern.makeForm("shruberry creation", "deca");
  gigi.signForm(*form);
  gigi.executeForm(*form);
  delete form;

  form = intern.makeForm("wrong input", "deca");

  std::cout << "-----------END-------------" << std::endl;

  return 0;
}
