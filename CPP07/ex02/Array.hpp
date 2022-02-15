#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

template<typename T>
class Array
{
    private:
        T *a;
        unsigned int dim;
        class MyException : public std::exception
        {
            const char* what() const throw()
            {
                return "impossible index";
            };
        };
    public:
        Array() { a(0); dim = 0; };
        Array(unsigned int n) 
        {
            dim = n;
            a = new T[n];
        };
        Array<T>(const Array & src)
        {
            dim = src.size();
            a = new T[src.size()];
            for (unsigned int i = 0; i < dim; i++)
                a[i] = src.a[i];
        };
        ~Array() { delete [] a; };
        Array<T> & operator=(Array<T> const & rhs)
        {
            if (this == &rhs)
                return *this;
            delete [] a;
            dim = rhs.size();
            a = new T[rhs.size()];
            for (unsigned int i = 0; i < dim; i++)
                a[i] = rhs.a[i];
            return *this;
        };
        T &operator[](unsigned int i) const
        {
            if (i >= dim)
                throw MyException();
            return a[i];
        };
        unsigned int size() const { return this->dim; };
};

#endif
