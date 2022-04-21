#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Form*	scf = NULL;
	try
	{
		std::cout << std::endl << "--SHRUBBERY--" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat hermes("Hermes", 3);
		scf = someRandomIntern.makeForm("shrubbery  creation", "Professor Farnsworth");
		std::cout << *scf << std::endl;
		hermes.signForm(*scf);
		std::cout << *scf << std::endl;
		hermes.executeForm(*scf);
		std::cout << *scf << std::endl;
		delete scf;
	}
	catch (std::exception & e)
	{
		delete scf;
		std::cout << e.what() << std::endl;
	}

	Form*	rrf = NULL;
	try
	{
		std::cout << std::endl << "--ROBOTOMY--" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat hermes("Hermes", 3);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		hermes.signForm(*rrf);
		std::cout << *rrf << std::endl;
		hermes.executeForm(*rrf);
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	catch (std::exception & e)
	{
		delete rrf;
		std::cout << e.what() << std::endl;
	}

	Form*	ppf = NULL;
	try
	{
		std::cout << std::endl << "--PRESIDENTIAL--" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat hermes("Hermes", 3);
		ppf = someRandomIntern.makeForm("presidential pardon", "Zap");
		std::cout << *ppf << std::endl;
		hermes.signForm(*ppf);
		std::cout << *ppf << std::endl;
		hermes.executeForm(*ppf);
		std::cout << *ppf << std::endl;
		delete ppf;
	}
	catch (std::exception & e)
	{
		delete ppf;
		std::cout << e.what() << std::endl;
	}

	Form*	ff = NULL;
	try
	{
		std::cout << std::endl << "--FAKE--" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat hermes("Hermes", 3);
		ff = someRandomIntern.makeForm("fake", "Bender");
		std::cout << *ff << std::endl;
		hermes.signForm(*ff);
		std::cout << *ff << std::endl;
		hermes.executeForm(*ff);
		std::cout << *ff << std::endl;
		delete ff;
	}
	catch (std::exception & e)
	{
		delete ff;
		std::cout << e.what() << std::endl;
	}

	Form*	ppff = NULL;
	try
	{
		std::cout << std::endl << "--PRESIDENTFAIL--" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat hermes("Hermes", 15);
		ppff = someRandomIntern.makeForm("presidential pardon", "Failder");
		std::cout << *ppff << std::endl;
		hermes.signForm(*ppff);
		std::cout << *ppff << std::endl;
		hermes.executeForm(*ppff);
		std::cout << *ppff << std::endl;
		delete ppff;
	}
	catch (std::exception & e)
	{
		delete ppff;
		std::cout << e.what() << std::endl;
	}

	Form*	vf = NULL;
	try
	{
		std::cout << std::endl << "--VOID--" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat hermes("Hermes", 3);
		vf = someRandomIntern.makeForm("", "Bender");
		std::cout << *vf << std::endl;
		hermes.signForm(*vf);
		std::cout << *vf << std::endl;
		hermes.executeForm(*vf);
		std::cout << *vf << std::endl;
		delete vf;
	}
	catch (std::exception & e)
	{
		delete vf;
		std::cout << e.what() << std::endl;
	}
	return(0);
}
