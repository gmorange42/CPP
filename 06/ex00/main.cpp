#include "Convert.hpp"

int	main(int ac, char ** av)
{
	if (ac != 2)
	{
		std::cout << "Only one argument is needed." << std::endl;
		return (1);
	}
	try
	{
		Convert convert(av[1]);
		convert.print_char();
		convert.print_int();
		convert.print_float();
		convert.print_double();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
