#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, std::string target, int gradeToSign, int gradeToExec);
		Form(Form const& ref);
		Form&	operator=(Form const& rhs);
		virtual	~Form();
		std::string	getName(void) const;
		virtual	bool	getSignature(void) const;
		virtual	int	getGradeToSign(void) const;
		virtual	int	getGradeToExec(void) const;
		virtual	void	beSigned(Bureaucrat const& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
	protected:
		const std::string	_name;
		const std::string	_target;
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

		class	NoSignatureException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& o, Form const& rhs);

#endif
