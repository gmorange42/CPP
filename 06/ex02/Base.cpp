#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base *	generate(void)
{
	int	r;
	Base *ptr;
	srand(time(NULL));

	r = rand() % 3;
	if (r == 0)
		ptr = new A;
	else if (r == 1)
		ptr = new B;
	else
		ptr = new C;
	return (ptr);
}

void    identify(Base* p)
{
        if (dynamic_cast<A*>(p))
                std::cout << "It's a A!" << std::endl;
        else if (dynamic_cast<B*>(p))
                std::cout << "It's a B!" << std::endl;
        else if (dynamic_cast<C*>(p))
                std::cout << "It's a C!" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It's a A!" << std::endl;
	}
	catch (std::exception) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "It's a B!" << std::endl;
	}
	catch (std::exception) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "It's a C!" << std::endl;
	}
	catch (std::exception) {}
}
