#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "--SHRUBBERY PART--" << std::endl;
	try
	{
		Bureaucrat hermes("Hermes", 150 );
		ShrubberyCreationForm arbuste("Tree");
		std::cout << arbuste << std::endl;
		hermes.signForm(arbuste);
		std::cout << arbuste << std::endl;
		arbuste.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 140);
		ShrubberyCreationForm arbuste("Tree");
		std::cout << arbuste << std::endl;
		hermes.signForm(arbuste);
		std::cout << arbuste << std::endl;
		arbuste.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 137);
		ShrubberyCreationForm arbuste("Tree");
		std::cout << arbuste << std::endl;
//		hermes.signForm(arbuste);
		std::cout << arbuste << std::endl;
		arbuste.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 137);
		ShrubberyCreationForm arbuste("Tree");
		std::cout << arbuste << std::endl;
		hermes.signForm(arbuste);
		std::cout << arbuste << std::endl;
		arbuste.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << std::endl << "--ROBOTOMY PART--" << std::endl;
	try
	{
		Bureaucrat hermes("Hermes", 70 );
		RobotomyRequestForm robot("Bender");
		std::cout << robot << std::endl;
		hermes.signForm(robot);
		std::cout << robot << std::endl;
		robot.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 50);
		RobotomyRequestForm robot("Bender");
		std::cout << robot << std::endl;
		hermes.signForm(robot);
		std::cout << robot << std::endl;
		robot.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 40);
		RobotomyRequestForm robot("Bender");
		std::cout << robot << std::endl;
//		hermes.signForm(robot);
		std::cout << robot << std::endl;
		robot.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 40);
		RobotomyRequestForm robot("Bender");
		std::cout << robot << std::endl;
		hermes.signForm(robot);
		std::cout << robot << std::endl;
		robot.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << std::endl << "--PRESIDENTIAL PART--" << std::endl;
	try
	{
		Bureaucrat hermes("Hermes", 30 );
		PresidentialPardonForm pardon("Bender");
		std::cout << pardon << std::endl;
		hermes.signForm(pardon);
		std::cout << pardon << std::endl;
		pardon.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 20);
		PresidentialPardonForm pardon("Bender");
		std::cout << pardon << std::endl;
		hermes.signForm(pardon);
		std::cout << pardon << std::endl;
		pardon.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 3);
		PresidentialPardonForm pardon("Bender");
		std::cout << pardon << std::endl;
//		hermes.signForm(pardon);
		std::cout << pardon << std::endl;
		pardon.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 3);
		PresidentialPardonForm pardon("Bender");
		std::cout << pardon << std::endl;
		hermes.signForm(pardon);
		std::cout << pardon << std::endl;
		pardon.execute(hermes);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;
	return(0);
}
