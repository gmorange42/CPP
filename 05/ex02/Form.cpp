#include "Form.hpp"

Form::Form(void) : _name("A"), _signature(false), _gradeToSign(1), _gradeToExec(1)
{
}

Form::Form(std::string name, std::string target, int gradeToSign, int gradeToExec) : _name(name), _target(target), _signature(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
}

Form::Form(Form const& ref) : _name(ref._name), _gradeToSign(ref._gradeToSign), _gradeToExec(ref._gradeToExec)
{
	*this = ref;
}

Form&	Form::operator=(Form const& rhs)
{
	this->_signature = rhs._signature;
	return (*this);
}

Form::~Form(void)
{
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSignature(void) const
{
	return (this->_signature);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

void	Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw(GradeTooLowException());
	if (!this->_signature)
		this->_signature = true;
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade required too low.");
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade required too high.");
}

const char*	Form::NoSignatureException::what(void) const throw()
{
	return ("The form is not signed.");
}

std::ostream&	operator<<(std::ostream& o, Form const& rhs)
{
	o << "Form : ";
	o << rhs.getName();
	if (rhs.getSignature())
		o << " (sign), [grade required to sign : ";
	else
		o << " (unsign), [grade required to sign : ";
	o << rhs.getGradeToSign();
	o << "] [grade required to execute : ";
	o << rhs.getGradeToExec();
	o << "].";
	return (o);
}
