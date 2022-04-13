#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& ref);
		Bureaucrat&	operator=(Bureaucrat const& rhs);
		~Bureaucrat();
		std::string	getName(void) const;
		unsigned int	getGrade(void) const;
	private:
		std::string	_name;
		unsigned int	_grade;
};

#endif
