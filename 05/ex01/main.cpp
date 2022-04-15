#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "--HERMES--" << std::endl;
	Bureaucrat hermes("Hermes", 151);
	std::cout << hermes << std::endl;
	std::cout << "DownGrade called" << std::endl;
	hermes.downGrade();
	std::cout << hermes << std::endl;
	std::cout << "DownGrade called" << std::endl;
	hermes.downGrade();
	std::cout << hermes << std::endl;
	std::cout << "UpGrade called" << std::endl;
	hermes.upGrade();
	std::cout << hermes << std::endl << std::endl;

	std::cout << std::endl << "--MORGAN--" << std::endl;
	Bureaucrat morgan("Morgan", 0);
	std::cout << morgan << std::endl;
	std::cout << "UpGrade called" << std::endl;
	morgan.upGrade();
	std::cout << morgan << std::endl;
	std::cout << "DownGrade called" << std::endl;
	morgan.downGrade();
	std::cout << morgan << std::endl;
	std::cout << "DownGrade called" << std::endl;
	morgan.downGrade();
	std::cout << morgan << std::endl << std::endl;

	std::cout << std::endl << "--WARDEN--" << std::endl;
	Bureaucrat warden;
	std::cout << warden << std::endl;
	std::cout << "UpGrade called" << std::endl;
	warden.upGrade();
	std::cout << warden << std::endl;
	std::cout << "DownGrade called" << std::endl;
	warden.downGrade();
	std::cout << warden << std::endl;
	std::cout << "DownGrade called" << std::endl;
	warden.downGrade();
	std::cout << warden << std::endl;
	
	Form form1("A38", 14, 1);
	form1.beSigned(morgan);
	form1.beSigned(warden);
	std::cout << form1 <<std::endl;

	return(0);
}
