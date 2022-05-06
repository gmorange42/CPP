#ifndef EASYFING_HPP
#define EASYFING_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class	notfound : public std::exception
{
	public:
		const char * what() const throw()
		{
			return ("Value not found.");
		}
};

template< typename T >
int	easyfind(T & a, int i)
{
	typename T::iterator it;
	it = find(a.begin(), a.end(), i);
	if (it == a.end())
		throw (notfound());
	return (*it);
}

#endif