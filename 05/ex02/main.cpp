#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		ShrubberyCreationForm arbuste("Form145", "test");
		std::cout << arbuste << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout <<  e.what() << std::endl;
	}
//	try
//	{
//		Bureaucrat	hermes("Hermes", 76);
//		std::cout << hermes << std::endl;
//		Form	form75("Form75", 75, 75);
//		std::cout << form75 << std::endl;
//		hermes.signForm(form75);
//		std::cout << form75 << std::endl;
//		hermes.signForm(form75);
//	}
//	catch (std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//
//	try
//	{
//		Bureaucrat	morgan("Morgan", 16);
//		std::cout << morgan << std::endl;
//		Form	form42("Form42", 42, 42);
//		std::cout << form42 << std::endl;
//		morgan.signForm(form42);
//		std::cout << form42 << std::endl;
//		morgan.signForm(form42);
//	}
//	catch (std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//
//	try
//	{
//		std::cout <<"--FORM TO SIGN GRADE TOO LOW--" << std::endl;
//		Form	form151("Form151", 151, 1);
//	}
//	catch (std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//
//	try
//	{
//		std::cout <<"--FORM TO SIGN GRADE TOO HIGH--" << std::endl;
//		Form	form0("Form0", 0, 1);
//	}
//	catch (std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//	
//	try
//	{
//		std::cout <<"--FORM TO EXECUTE GRADE TOO LOW--" << std::endl;
//		Form	form151("Form151", 1, 151);
//	}
//	catch (std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//
//	try
//	{
//		std::cout <<"--FORM TO EXECUTE GRADE TOO HIGH--" << std::endl;
//		Form	form0("Form0", 1, 0);
//	}
//	catch (std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
	return(0);
}
