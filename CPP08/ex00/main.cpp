#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>
#include <iostream>

int main ()
{
    {
        int myints[] = { 10, 20, 30, 40 };

        std::vector<int> myvector (myints,myints+4);

        std::vector<int>::iterator it;

        try
        {
            it = easyfind(myvector, 30);
            std::cout << "the value has been found: " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            it = easyfind(myvector, 0);
            std::cout << "the value has been found: " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::list<int>::iterator it;
        std::list<int> my_list;

        my_list.push_back(1);
        my_list.push_back(3);
        my_list.push_back(5);
        my_list.push_back(7);

        try
        {
            it = easyfind(my_list, 1);
            std::cout << "the value has been found: " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            it = easyfind(my_list, 0);
            std::cout << "the value has been found: " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}
