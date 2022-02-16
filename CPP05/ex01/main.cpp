#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  Bureaucrat bob("Checco", 100);
  Bureaucrat boss("Brunetta", 1);

  try
  {
    Form test_too_high("Referenze", 151, 1);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    Form test_too_low("Referenze", 150, 0);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  Form test_good("Referenze", 50, 1);
  
  try
  {
    bob.signForm(test_good);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    boss.signForm(test_good);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
