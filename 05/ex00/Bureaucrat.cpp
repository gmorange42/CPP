#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Hermes"), _grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->_name = rhs._name;
	this->_grade= rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
