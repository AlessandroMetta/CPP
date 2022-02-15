#ifndef __ITER_HPP__
# define __ITER_HPP__

template<typename T>
void iter(T array[], unsigned int lenght, void (function)(T &))
{
	for (unsigned int i = 0; i < lenght; i++)
		function(array[i]);
}

template<typename T>
void printValue (T & arrayValue)
{
    std::cout << arrayValue << std::endl;
}

#endif
