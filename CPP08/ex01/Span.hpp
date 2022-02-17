#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <vector>
# include <iostream>

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
    public:
        Span(unsigned int N);
        Span(const Span & copy);
        ~Span();
        void addNumber(const int nbr);
        void generate();
        int shortestSpan();
        int longestSpan();
};

#endif
