#include "Array.hpp"

int	main(void)
{
	std::cout << "--INT PART--" << std::endl;
	Array<int> int_test1;
	Array<int> int_test2(3);
	Array<int> int_test3(int_test2);

	std::cout << int_test1[0] << std::endl;
	
	for (int i=0; i < int_test2.size(); i++)
		int_test2[i] = i;


	int_test2.print();

	int_test1 = int_test2;

	int_test1.print();
	int_test2[1] = 42;
	int_test1.print();
	int_test2.print();

	return (0);
}
