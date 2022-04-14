#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Warden"), _grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (this->_grade > 150)
			throw (GradeTooLowException(Bureaucrat()));
		if (this->_grade < 1)
			throw (GradeTooHighException(Bureaucrat()));
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 150;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 1;
	}
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

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	std::cout << "TEST LOW basic" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat const& bureaucrat)
{
	this->_bureaucrat = bureaucrat;
	std::cout << "TEST LOW overcharge" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	std::cout << "TEST HIGH basic" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat const& bureaucrat)
{
	std::cout << "TEST HIGH overcharge" << std::endl;
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	std::cout << "HELLO" << std::endl;
	return ("Grade too low, new grade -> 150.");
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, new grade -> 1.");
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
	try
	{
		if (this->_grade < 1)
			throw (GradeTooHighException(Bureaucrat()));
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 1;
	}
}

void	Bureaucrat::downGrade(void)
{
	this->_grade++;
	try
	{
		if (this->_grade > 150)
			throw (GradeTooLowException(Bureaucrat()));
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 150;
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs)
{
	o << rhs.getName(); 
	o << ", bureaucrat grade ";
	o << rhs.getGrade();
	return (o);
}