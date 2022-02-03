#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  Bureaucrat intern("Tirocinante", 150);
  Bureaucrat checco("Checco", 100);
  Bureaucrat brunetta("Brunetta", 50);
  Bureaucrat berlu("Berlu", 5);
  ShrubberyCreationForm abete("alberello");
  RobotomyRequestForm quac("funzione copia");
  PresidentialPardonForm oronzo("Oronzo");

  std::cout << "-----------BEGIN-------------" << std::endl;
  intern.executeForm(abete);
  intern.signForm(abete);
  checco.signForm(abete);
  checco.executeForm(abete);
  std::cout << "---------------------------" << std::endl;
  checco.executeForm(quac);
  checco.signForm(quac);
  brunetta.signForm(quac);
  brunetta.executeForm(quac);
  brunetta.incrementGrade(10);
  brunetta.executeForm(quac);
  std::cout << "---------------------------" << std::endl;
  brunetta.executeForm(oronzo);
  brunetta.signForm(oronzo);
  berlu.signForm(oronzo);
  berlu.executeForm(oronzo);
  std::cout << "----------END--------------" << std::endl;
  return 0;
}
