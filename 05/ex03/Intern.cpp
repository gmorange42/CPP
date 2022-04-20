#include "Intern.hpp"

Intern::Intern(void)
{
	this->classNameTab[0] = "ShrubberyCreationForm";
	this->classNameTab[1] = "RobotomyRequestForm";
	this->classNameTab[2] = "PresidentialPardonForm";
	this->memberTab[0] = &Intern::makeShrubberyCreation;
	this->memberTab[1] = &Intern::makeRobotomyRequest;
	this->memberTab[2] = &Intern::makePresidentialPardon;
	std::cout << "Intern is hired." << std::endl;
}

Intern::Intern(Intern const& ref)
{
	*this = ref;
}

Intern&	Intern::operator=(Intern const& rhs)
{
	for (int i = 0; i < 3; i++)
		this->memberTab[i] = rhs.memberTab[i];
	return(*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern is fired." << std::endl;
}

std::string	Intern::convert(std::string name)
{
	std::string className = "";;
	className += std::toupper(name[0]);
	for (int i = 1; i < (int)name.size(); i++)
	{
		if (name[i] == ' ' and name[i + 1])
		{
			i++;
			className += std::toupper(name[i]);
		}
		else
			className += std::tolower(name[i]);
	}
	className += "Form";
	return (className);
}

const char*	Intern::NoClassException::what(void) const throw()
{
	return ("Form type not found.");
}

Form*	Intern::makeShrubberyCreation(std::string formName, std::string target)
{
	Form* form = new ShrubberyCreationForm(formName, target); 
	return (form);
}

Form*	Intern::makeRobotomyRequest(std::string formName, std::string target)
{
	Form* form = new RobotomyRequestForm(formName, target); 
	return (form);
}

Form*	Intern::makePresidentialPardon(std::string formName, std::string target)
{
	Form* form = new PresidentialPardonForm(formName, target); 
	return (form);
}

Form*	Intern::makeForm(std::string formName, std::string target)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (classNameTab[i] == this->convert(formName))
			break;
	}
	if (i < 3)
		return((this->*memberTab[i])(formName, target));
	else
	{
		std::cout << "The intern didn't find the form." << std::endl;
		throw(NoClassException());
		return (NULL);
	}
}
