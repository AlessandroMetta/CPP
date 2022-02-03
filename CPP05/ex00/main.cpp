#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat test("Checco", 10);

  try
  {
    Bureaucrat test1("Eustachio", 151);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    Bureaucrat test2("GianFiliberto", 0);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test << std::endl;

  try
  {
    test.incrementGrade(5);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test << std::endl;

  try
  {
    test.incrementGrade(9);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test << std::endl;

  try
  {
    test.decrementGrade(145);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test << std::endl;

  try
  {
    test.decrementGrade(90);
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << test << std::endl;

  return 0;
}
