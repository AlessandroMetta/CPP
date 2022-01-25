#ifndef __CAT_HPP__
# define __CAT_HPP__
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
        public:
                Cat();
                virtual ~Cat();
                void makeSound() const;
};

#endif

