#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
# include <iostream>

class WrongAnimal
{
        protected:
                std::string Type;
        public:
                WrongAnimal();
                virtual ~WrongAnimal();
		std::string getType() const;
                virtual void makeSound() const;
};

#endif

