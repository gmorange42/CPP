#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Warden"), _grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw (GradeTooLowException());
	if (this->_grade < 1)
		throw (GradeTooHighException());
	std::cout << this->_name << " is hired at grade " << this->_grade << "." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& ref) : _name(ref.getName())
{
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " is fired." << std::endl;
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low.");
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{

	return ("Grade too high.");
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
	std::cout << _name << " try to upgrade." << std::endl;
	this->_grade--;
	if (this->_grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::downGrade(void)
{
	std::cout << _name << " try to downgrade." << std::endl;
	this->_grade++;
	if (this->_grade > 150)
		throw (GradeTooLowException());
}

void	Bureaucrat::signForm(Form& form)
{
	std::cout << this->_name;
	if (this->_grade <= form.getGradeToSign() and !form.getSignature())
		std::cout << " signed " << form.getName() << '.' << std::endl;
	else
	{
		std::cout << " couldn't sign " << form.getName() << " because ";
		if (!form.getSignature())
			std::cout << this->_name << " haven't the required grade." << std::endl;
		else
			std::cout << "it's already signed." << std::endl;

	}
	form.beSigned(*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs)
{
	o << rhs.getName(); 
	o << ", bureaucrat grade ";
	o << rhs.getGrade();
	o << '.';
	return (o);
}
