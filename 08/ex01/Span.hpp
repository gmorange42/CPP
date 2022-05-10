#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <set>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const & ref);
		Span&	operator=(Span const & rhs);
		~Span(void);
		void		addNumber(int nbr);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void	printValues(void) const;
		void		addMultiNumbers(Span & toCopy);
	private:
		Span(void);
		std::multiset<int> list;
		unsigned int	_n;

		class sizeMax : public std::exception
		{
			const char * what(void) const throw()
			{
				return ("Max size reached");
			}
		};
		class empty : public std::exception
		{
			const char * what(void) const throw()
			{
				return ("There isn't any value");
			}
		};
		class oneElement : public std::exception
		{
			const char * what(void) const throw()
			{
				return ("There is only one value");
			}
		};
};

#endif
