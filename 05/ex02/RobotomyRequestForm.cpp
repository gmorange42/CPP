#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", target, 72, 45)
{
	std::cout << "New RobotomyRequestForm ! [" << this->_name << "] is created." << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->_signature)
		throw (NoSignatureException());
	if (executor.getGrade() > this->_gradeToExec)
		throw (GradeTooLowException());
	std::cout << "Vvvvvv... Vvvvv... VVVVBRRRRRRR!!!" << std::endl;
	int robotisation = time(NULL);
	if (robotisation % 2)
		std::cout << this->_target << " has been robotized." << std::endl;
	else
		std::cout << "The operation has failed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& ref)
{
	*this = ref;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	this->_signature = rhs._signature;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->_name << " is thrown in the trash." << std::endl;
}
