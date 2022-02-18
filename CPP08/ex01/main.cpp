#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib> 

int RandomNumber () { return (std::rand()%100); }

void generate(Span & sp, unsigned int n)
{
    try
    {
        for (unsigned int i = 0; i < n; i++)
            sp.addNumber(RandomNumber());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    {
        Span sp = Span(5);

        try
        {
            sp.addNumber(6);    // test not enought arguments for the calculation
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(11);   // test more than the vector can take
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        Span sp = Span(5);
        std::srand ( unsigned ( std::time(0) ) );
        generate(sp, 6);
        // sp.printAllValues();
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    return 0; 
}
