#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	seri;
	seri = reinterpret_cast<uintptr_t>(ptr);
	return (seri);
}

Data*		deserialize(uintptr_t raw)
{
	Data*	dese;
	dese = reinterpret_cast<Data*>(raw);
	return (dese);
}

int		main(void)
{
	Data		data_1(38, 'F', 32.31);
	Data		data_2(456, 'B', 5436.0007f);
	uintptr_t	uint;

	std::cout << "--BEFORE CONV--" << std::endl;
	data_1.print_values();
	data_2.print_values();

	uint = serialize(&data_1);
	data_2 = *(deserialize(uint));

	std::cout << std::endl << "--AFTER CONV--" << std::endl;
	data_1.print_values();
	data_2.print_values();
	return (0);
}
