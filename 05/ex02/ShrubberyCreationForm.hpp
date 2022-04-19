#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& ref);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& rhs);
		virtual	~ShrubberyCreationForm();
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
