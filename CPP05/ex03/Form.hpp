#ifndef __FORM_HPP__
# define __FORM_HPP__
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string name;
		const unsigned int grade_to_sign;
		const unsigned int grade_to_execute;
		bool signature;

		void checkGrade( unsigned int grade );

	protected:
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

		class NotSignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class AlreadySignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};

	public:
		Form();
		Form( std::string name, const unsigned int gradeS, const unsigned int gradeE );
		Form( const Form & src );
		virtual ~Form();

		const std::string getName() const;
		const unsigned int getGradeToSign() const;
		const unsigned int getGradeToExecute() const;
		const bool getSignature() const;

		void beSigned(Bureaucrat &signer);
		virtual void execute(const Bureaucrat & executer) const = 0;
};

std::ostream & operator<<( std::ostream & o, const Form & b );

#endif
