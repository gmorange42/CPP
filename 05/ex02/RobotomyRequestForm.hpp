#ifndef ROBOROMYREQUESTFORM_HPP
#define ROBOROMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <ctime>

class	Bureaucrat;
class	Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& ref);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const& rhs);
		virtual	~RobotomyRequestForm();
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
