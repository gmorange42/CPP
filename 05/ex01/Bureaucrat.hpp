#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string	name, int grade);
		Bureaucrat(Bureaucrat const& ref);
		Bureaucrat&	operator=(Bureaucrat const& rhs);
		~Bureaucrat(void);
		std::string	getName(void) const;
		int		getGrade(void) const;
		void		upGrade(void);
		void		downGrade(void);
		void		signForm(Form& form);
	private:
		const std::string	_name;
		int		_grade;
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs);

#endif
