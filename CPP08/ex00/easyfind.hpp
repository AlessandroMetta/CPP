#ifndef __EASYFIND_HPP__
# define  __EASYFIND_HPP__

# include <algorithm>
# include <iterator>
# include <iostream>

class NotFound: public std::exception
{
    virtual const char * what() const throw()
    {
        return "Value not found";
    };
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;
    it = std::find (container.begin(), container.end(), value);
    if (it == container.end())
        throw NotFound();
    return it;
}

#endif
