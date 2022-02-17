#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>
#include <iostream>

int main()
{
    {
        std::vector<int> test;
        std::vector<int>::iterator it;
        test.push_back(10);
        test.push_back(20);
        test.push_back(30);
        test.push_back(40);
        try
        {
            it = easyfind(test, 10);
            std::cout << "Occurrence of " << *it << " found." << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::list<int> test;
        std::list<int>::iterator it;
        test.push_back(10);
        test.push_back(20);
        test.push_back(30);
        test.push_back(40);
        try
        {
            it = easyfind(test, 10);
            std::cout << "Occurrence of " << *it << " found." << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
