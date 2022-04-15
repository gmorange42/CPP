#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(Form const& ref);
		Form&	operator=(Form const& rhs);
		~Form();
		std::string	getName(void) const;
		bool		getSignature(void) const;
		int		getGradeToSign(void) const;
		int		getGradeToExec(void) const;
		void		beSigned(Bureaucrat const& bureaucrat);
	private:
		const std::string	_name;
		bool			_signature;
		const int		_gradeToSign;
		const int		_gradeToExec;
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

std::ostream&	operator<<(std::ostream& o, Form const& rhs);

#endif
