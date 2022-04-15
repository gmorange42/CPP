#include "Form.hpp"

Form::Form(void) : _name("A38"), _signature(false), _gradeToSign(0), _gradeToExec(0)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name("A38"), _signature(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
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
	try
	{
		if (bureaucrat.getGrade() > this->_gradeToSign)
			throw(GradeTooLowException());
		if (!this->_signature)
			this->_signature = true;
	}
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("test pouet pouet");
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
	o << "]." << std::endl;
	return (o);
}
