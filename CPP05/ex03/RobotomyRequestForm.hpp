#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm & operator=( const RobotomyRequestForm & rhs );

		const std::string getTarget() const;
		virtual void execute(const Bureaucrat & executer) const;
};
// Mon Amour (je t'aime beaucoup) tchao- tu dois es)
#endif
