#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib> 

int RandomNumber () { return (std::rand()%100); }

void generate(Span & sp, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
        sp.addNumber(RandomNumber());
}

int main()
{
    std::srand ( unsigned ( std::time(0) ) );

    Span sp = Span(5);

    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    // generate(sp, 5);


    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0; 
}
