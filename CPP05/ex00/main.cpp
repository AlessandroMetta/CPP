#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat test_good("Checco", 10);

  try
  {
    Bureaucrat test_too_low("Eustachio", 151);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    Bureaucrat test_too_high("GianFiliberto", 0);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test_good << std::endl;

  try
  {
    test_good.incrementGrade(5);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test_good << std::endl;

  try
  {
    test_good.incrementGrade(9);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test_good << std::endl;

  try
  {
    test_good.decrementGrade(145);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test_good << std::endl;

  try
  {
    test_good.decrementGrade(90);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test_good << std::endl;

  return 0;
}
