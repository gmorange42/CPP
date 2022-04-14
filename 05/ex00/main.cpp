#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat hermes("Hermes", 151);
	std::cout << hermes << std::endl;
	hermes.downGrade();
	std::cout << hermes << std::endl;
	hermes.downGrade();
	std::cout << hermes << std::endl << std::endl;

	Bureaucrat morgan("Morgan", 0);
	std::cout << morgan << std::endl;
	morgan.upGrade();
	std::cout << morgan << std::endl;
	morgan.downGrade();
	std::cout << morgan << std::endl;
	morgan.downGrade();
	std::cout << morgan << std::endl << std::endl;

	Bureaucrat warden;
	std::cout << warden << std::endl;
	warden.upGrade();
	std::cout << warden << std::endl;
	warden.downGrade();
	std::cout << warden << std::endl;
	warden.downGrade();
	std::cout << warden << std::endl;
	return(0);
}
