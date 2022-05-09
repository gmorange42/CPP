#include "Span.hpp"

int	main(void)
{

	Span test(10);

	try
	{
		test.printValues();
	//	test.addNumber(6);
	//	test.addNumber(3);
		test.addMultiNumbers(4, 5);
		test.addMultiNumbers(4, 50);
		test.addMultiNumbers(2, -5);
	//	test.addNumber(8);
	//	test.addNumber(-1);
	//	test.addNumber(3);
	//	test.addNumber(30);
		test.printValues();
		std::cout << "test.longestSpan() : " << test.longestSpan() << std::endl;
		std::cout << "test.shortestSpan() : " << test.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return 0;
//}
//int	main(void)
//{
//	Span	list(1000);
//
//	for (int i=0; i < 1000; i++)
//		list.addNumber(i);
//	list.printValues();
//	return (0);
//}
