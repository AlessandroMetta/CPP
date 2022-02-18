#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(): std::stack<T>() {};
        virtual ~MutantStack() {};
        MutantStack(const MutantStack & copy): std::stack<T>(copy) {};
        MutantStack & operator=(const MutantStack<T> & rhs)
        {
            if (this == &rhs)
                return *this;
            this->c = rhs.c;
            return *this;
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();};
        iterator end() { return this->c.end();};
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const {return this->c.begin();};
        const_iterator end() const { return this->c.end();};
};

#endif
