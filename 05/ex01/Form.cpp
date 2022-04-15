#include "Form.hpp"

Form::Form(void) : _name("A38"), _signature(false), _gradeToSign(0), _gradeToExec(0)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signature(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (this->_gradeToSign > 150 or this->_gradeToExec > 150)
		throw(GradeTooLowException());
	if (this->_gradeToSign < 1 or this->_gradeToExec < 1)
		throw(GradeTooHighException());
	std::cout << "New Form ! [" << this->_name << "] is created." << std::endl;
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
	std::cout << this->_name << " is thrown in the trash." << std::endl;
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
