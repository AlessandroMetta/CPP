#include "Span.hpp"

Span::Span(unsigned int N)
{
    std::cout << "Span Default Constructor Call" << std::endl;
    vect.reserve(N);
}

Span::Span(const Span & copy)
{
    std::cout << "Span Copy Constructor Call" << std::endl;
    vect = copy.vect;
}

Span::~Span()
{
    std::cout << "Span Destructor Call" << std::endl;
}

void Span::addNumber(const int nbr)
{
    if (vect.size() == vect.capacity())
        throw NoSpaceLeft();
    vect.push_back(nbr);
}

int Span::shortestSpan()
{
    return 0;
}

int Span::longestSpan()
{

    return 0;
}
