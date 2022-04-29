#include "Base.hpp"

int	main(void)
{
	Base *base;

	base = generate();

	std::cout << "[indentify(Base* p)]" << std::endl;
	identify(base);
	std::cout << std::endl << "[indentify(Base& p)]" << std::endl;
	identify(*base);

	delete base;
	return (0);
}
