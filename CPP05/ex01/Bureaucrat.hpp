#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		std::string name;
		unsigned int grade;

		void setGrade(unsigned int grade);

		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw();
		};

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const unsigned int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat & rhs);

		const std::string getName() const;
		const unsigned int getGrade() const;
		void incrementGrade(unsigned int to_increment);
		void decrementGrade(unsigned int to_decrement);
		void signForm(Form &to_sign);
};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & b);

#endif
