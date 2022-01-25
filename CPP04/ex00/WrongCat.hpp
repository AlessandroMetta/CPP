#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
        public:
                WrongCat();
                virtual ~WrongCat();
                void makeSound() const;
};

#endif

