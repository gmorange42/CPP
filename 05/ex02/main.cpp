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
		ShrubberyCreationForm little_tree("Tree");
		std::cout << little_tree << std::endl;
		hermes.signForm(little_tree);
		std::cout << little_tree << std::endl;
		hermes.executeForm(little_tree);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 140);
		ShrubberyCreationForm little_tree("Tree");
		std::cout << little_tree << std::endl;
		hermes.signForm(little_tree);
		std::cout << little_tree << std::endl;
		hermes.executeForm(little_tree);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 137);
		ShrubberyCreationForm little_tree("Tree");
		std::cout << little_tree << std::endl;
//		hermes.signForm(little_tree);
		std::cout << little_tree << std::endl;
		hermes.executeForm(little_tree);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 137);
		ShrubberyCreationForm little_tree("Tree");
		std::cout << little_tree << std::endl;
		hermes.signForm(little_tree);
		std::cout << little_tree << std::endl;
		hermes.executeForm(little_tree);
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
		RobotomyRequestForm robot("Fry");
		std::cout << robot << std::endl;
		hermes.signForm(robot);
		std::cout << robot << std::endl;
		hermes.executeForm(robot);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 50);
		RobotomyRequestForm robot("Fry");
		std::cout << robot << std::endl;
		hermes.signForm(robot);
		std::cout << robot << std::endl;
		hermes.executeForm(robot);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 40);
		RobotomyRequestForm robot("Fry");
		std::cout << robot << std::endl;
//		hermes.signForm(robot);
		std::cout << robot << std::endl;
		hermes.executeForm(robot);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat hermes("Hermes", 40);
		RobotomyRequestForm robot("Fry");
		std::cout << robot << std::endl;
		hermes.signForm(robot);
		std::cout << robot << std::endl;
		hermes.executeForm(robot);
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
		hermes.executeForm(pardon);
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
		hermes.executeForm(pardon);
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
		hermes.executeForm(pardon);
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
		hermes.executeForm(pardon);
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
	std::cout << std::endl;
	return(0);
}
