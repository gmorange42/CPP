#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Hermes"), _grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const& ref)
{
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::upGrade(void)
{
	this->_grade--;
}

void	Bureaucrat::downGrade(void)
{
	this->_grade++;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs)
{
	o << rhs.getName(); 
	o << ", bureaucrat grade ";
	o << rhs.getGrade();
	return (o);
}
