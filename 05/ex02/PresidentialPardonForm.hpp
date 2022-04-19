#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& ref);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& rhs);
		virtual	~PresidentialPardonForm();
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
