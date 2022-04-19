#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", target, 25, 5 )
{
	std::cout << "New PresidentialPardonForm ! [" << this->_name << "] is created." << std::endl;
}
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->_signature)
		throw (NoSignatureException());
	if (executor.getGrade() > this->_gradeToExec)
		throw (GradeTooLowException());
	std::cout << this->_target << " has been pardoned by the president." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& ref)
{
	*this = ref;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	this->_signature = rhs._signature;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << this->_name << " is thrown in the trash." << std::endl;
}
