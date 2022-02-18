#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
    private:
        std::vector<int> vect;
        class NoSpaceLeft: public std::exception
        {
            virtual const char * what() const throw()
            {
                return "No space left on the Span";
            };
        };
        class NotEnoughtArgument: public std::exception
        {
            virtual const char * what() const throw()
            {
                return "Not enought argument";
            };
        };
    public:
        Span(unsigned int N);
        Span(const Span & copy);
        ~Span();
        Span & operator=(const Span & rhs);
        void addNumber(const int nbr);
        void generate();
        void printAllValues();
        int shortestSpan();
        int longestSpan();
};

#endif
