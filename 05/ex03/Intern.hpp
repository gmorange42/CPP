#ifndef	INTERN_HPP
#define	INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Bureaucrat;
class	Form;
class	PresidentialPardonForm;
class	RobotomyRequestForm;
class	ShrubberyCreationForm;

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const& ref);
		Intern& operator=(Intern const& rhs);
		~Intern(void);
		Form*	makeForm(std::string formName, std::string target);
	private:
		Form*	makeShrubberyCreation(std::string formName, std::string target);
		Form*	makeRobotomyRequest(std::string formName, std::string target);
		Form*	makePresidentialPardon(std::string formName, std::string target);
		std::string	convert(std::string name);
		std::string	classNameTab[3];
		typedef Form*	(Intern::* ptrTab)(std::string formName, std::string target);
		ptrTab	memberTab[3];
		class	NoClassException : public std::exception
		{
			const char * what(void) const throw();
		};
};

#endif
