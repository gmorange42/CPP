#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bureaucrat("Louis", 1);
	std::cout << bureaucrat << std::endl;
	bureaucrat.upGrade();
	bureaucrat.upGrade();
	std::cout << bureaucrat << std::endl;
	return(0);
}
