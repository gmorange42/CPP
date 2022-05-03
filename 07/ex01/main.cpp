#include "Iter.hpp"

template <typename T>
void	print_values(T& a)
{
	std::cout << "Value : " << a << std::endl;
}

int	main(void)
{
	int	int_tab[5] = {1, 2, 3, 4, 5};
	iter(int_tab, 5, print_values);

	double	double_tab[5] = {3.5436, 4.5324, 7.565, -6.234, 0.654};
	iter(double_tab, 5, print_values);

	std::string	string_tab[3] = {"I'm ", "a ", "test."};
	iter(string_tab, 3, print_values);
	return (0);
}
