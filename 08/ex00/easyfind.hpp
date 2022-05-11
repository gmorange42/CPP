#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class	notfound : public std::exception
{
	public:
		const char * what() const throw()
		{
			return ("Value not found.");
		}
};

template< typename T >
int	easyfind(T const & a, int const i)
{
	typename T::const_iterator it;
	it = find(a.begin(), a.end(), i);
	if (it == a.end())
		throw (notfound());
	return (*it);
}

#endif
