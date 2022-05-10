#include "Span.hpp"
#include <time.h>
#include <stdlib.h>

int	main(void)
{
	srand(time(NULL));

	std::cout << "--MANDATORY PART--" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;


	std::cout << "--RANDOM PART--" << std::endl;
	Span test(10);
	Span pouet(5);

	for (int i=0; i < 5; i++)
		pouet.addNumber(rand() % 100);
	test.printValues();
	test.addMultiNumbers(pouet);

	test.printValues();

	std::cout << "test.longestSpan() : " << test.longestSpan() << std::endl;
	std::cout << "test.shortestSpan() : " << test.shortestSpan() << std::endl;
	std::cout << std::endl;


	std::cout << "--BIG PART--" << std::endl;
	Span	big(10000);
	Span	bigger(20000);

	for (int i=-10000; i < 0; i++)
		big.addNumber(i);	
	bigger.addMultiNumbers(big);
	bigger.addMultiNumbers(sp);
	bigger.addNumber(200);
	bigger.addNumber(310);
	bigger.addNumber(760);
	bigger.addNumber(5743);

	std::cout << "bigger.longestSpan() : " << bigger.longestSpan() << std::endl;
	std::cout << "bigger.shortestSpan() : " << bigger.shortestSpan() << std::endl << std::endl;

	std::cout << "--SIZE MAX--" << std::endl;
	try
	{
		Span	size_max(5);

		for (int i=0; i < 6; i++)
			size_max.addNumber(i);
	}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;

	std::cout << "--EMPTY--" << std::endl;
	try
	{
		Span	empty(5);

		std::cout << "empty.longestSpan() : " << empty.longestSpan() << std::endl;
	}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;

	std::cout << "--ONE ELEMENT--" << std::endl;
	try
	{
		Span	one_element(5);

		one_element.addNumber(6);

		one_element.printValues();

		std::cout << "one_element.shortestSpan() : " << one_element.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;
	return (0);
}
