#include "Harl.hpp"

int	main(void)
{
	Harl foo;
	std::cout << "foo.complain(\"\");" << std::endl;
	foo.complain("");
	std::cout << "foo.complain(\"DEBUG\");" << std::endl;
	foo.complain("DEBUG");
	std::cout << "foo.complain(\"INFO\");" << std::endl;
	foo.complain("INFO");
	std::cout << "foo.complain(\"WARNING\");" << std::endl;
	foo.complain("WARNING");
	std::cout << "foo.complain(\"ERROR\");" << std::endl;
	foo.complain("ERROR");
	std::cout << "foo.complain(\"pouet\");" << std::endl;
	foo.complain("pouet");
	return (0);
}
