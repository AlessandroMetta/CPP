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

  Form * form = intern.makeForm("presidential pardon", "Pippo");
  gigi.signForm(*form);
  gigi.executeForm(*form);
  delete form;

  std::cout << "-----------ROBOT-------------" << std::endl;

  form = intern.makeForm("robotomy request", "heads or tails");
  gigi.signForm(*form);
  gigi.executeForm(*form);
  delete form;

  std::cout << "-----------SHRU-------------" << std::endl;

  form = intern.makeForm("shruberry creation", "alberello");
  gigi.signForm(*form);
  gigi.executeForm(*form);
  delete form;

  std::cout << "-----------UNKN-------------" << std::endl;

  form = intern.makeForm("wrong input", "deca");

  std::cout << "-----------END-------------" << std::endl;

  return 0;
}
