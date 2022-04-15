#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << "--HERMES--" << std::endl;
		Bureaucrat	hermes("Hermes", 142);
		std::cout << hermes << std::endl;
		hermes.upGrade();
		std::cout << hermes << std::endl;
		hermes.downGrade();
		std::cout << hermes << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "--MORGAN--" << std::endl;
		Bureaucrat	morgan("Morgan", 1);
		std::cout << morgan << std::endl;
		morgan.downGrade();
		std::cout << morgan << std::endl;
		morgan.upGrade();
		std::cout << morgan << std::endl;
		morgan.upGrade();
		std::cout << morgan << std::endl;
		morgan.downGrade();
		std::cout << morgan << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "--TOOHIGH--" << std::endl;
		Bureaucrat	toohigh("Toohigh", -1);
		std::cout << toohigh << std::endl;
		toohigh.downGrade();
		std::cout << toohigh << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "--TOOLOW" << std::endl;
		Bureaucrat	toolow("Toolow", 151);
		std::cout << toolow << std::endl;
		toolow.upGrade();
		std::cout << toolow << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

//	std::cout << "--HERMES--" << std::endl;
//	Bureaucrat hermes("Hermes", 151);
//	std::cout << hermes << std::endl;
//	std::cout << "DownGrade called" << std::endl;
//	hermes.downGrade();
//	std::cout << hermes << std::endl;
//	std::cout << "DownGrade called" << std::endl;
//	hermes.downGrade();
//	std::cout << hermes << std::endl;
//	std::cout << "UpGrade called" << std::endl;
//	hermes.upGrade();
//	std::cout << hermes << std::endl << std::endl;
//
//	std::cout << std::endl << "--MORGAN--" << std::endl;
//	Bureaucrat morgan("Morgan", 0);
//	std::cout << morgan << std::endl;
//	std::cout << "UpGrade called" << std::endl;
//	morgan.upGrade();
//	std::cout << morgan << std::endl;
//	std::cout << "DownGrade called" << std::endl;
//	morgan.downGrade();
//	std::cout << morgan << std::endl;
//	std::cout << "DownGrade called" << std::endl;
//	morgan.downGrade();
//	std::cout << morgan << std::endl << std::endl;
//
//	std::cout << std::endl << "--WARDEN--" << std::endl;
//	Bureaucrat warden;
//	std::cout << warden << std::endl;
//	std::cout << "UpGrade called" << std::endl;
//	warden.upGrade();
//	std::cout << warden << std::endl;
//	std::cout << "DownGrade called" << std::endl;
//	warden.downGrade();
//	std::cout << warden << std::endl;
//	std::cout << "DownGrade called" << std::endl;
//	warden.downGrade();
//	std::cout << warden << std::endl;
	return(0);
}
