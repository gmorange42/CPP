#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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

	private:
		std::string	_name;
		int		_grade;
	class	GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			GradeTooLowException(Bureaucrat const& bureaucrat);
			virtual const char *what() const throw();
		private:
			Bureaucrat& bureaucrat;
	};

	class	GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			GradeTooHighException(Bureaucrat const& bureaucrat);
			virtual const char *what() const throw();
	};

};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs);

#endif