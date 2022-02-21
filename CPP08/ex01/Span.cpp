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

Span & Span::operator=(const Span & rhs)
{
    if (this == &rhs)
        return *this;
    vect = rhs.vect;
    return *this;
}

void Span::addNumber(const int nbr)
{
    if (vect.size() == vect.capacity())
        throw NoSpaceLeft();
    vect.push_back(nbr);
}

int Span::shortestSpan()
{
    int ans = INT_MAX; 
    std::vector<int>::iterator it;
    std::vector<int>::iterator jt;
    
    if (vect.size() < 2)
        throw NotEnoughtArgument();
    for (it = vect.begin(); it < vect.end() - 1; it++)
    {
        for (jt = it + 1; jt < vect.end(); jt++)
        {
            if (abs(*it - *jt) < ans)
                ans = abs(*it - *jt);
        }
    }
    return ans; 
}

int Span::longestSpan()
{
    std::vector<int>::iterator it;
    int min = INT_MAX;
    int max = INT_MIN;

    if (vect.size() < 2)
        throw NotEnoughtArgument();
    for (it = vect.begin(); it < vect.end(); it++)
    {
        if (*it < min)
            min = *it;
        if (*it > max)
            max = *it;
    }
    return (max - min);
}

void Span::printAllValues()
{
    std::vector<int>::iterator it;
    std::cout << "Values in vector: ";
    for (it = vect.begin(); it < vect.end(); it++)
    {
        std::cout << *it << ",\t";
    }
    std::cout << std::endl;
}
