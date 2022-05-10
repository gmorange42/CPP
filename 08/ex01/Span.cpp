#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(Span const & ref)
{
	*this = ref;
}

Span&	Span::operator=(Span const & rhs)
{
	this->_n = rhs._n;
	return (*this);
}

Span::~Span(void) {}

unsigned int	Span::shortestSpan(void)
{
	if (this->list.empty())
		throw(empty());
	if (this->list.size() == 1)
		throw(oneElement());

	unsigned int	shortest = *this->list.rbegin() - *this->list.begin();
	int		previousValue;

	std::multiset<int>::const_iterator lit(this->list.begin());
	std::multiset<int>::const_iterator lend(this->list.end());

	for (;lit != lend;)
	{
		previousValue = *lit;
		lit++;
		if ((static_cast<unsigned int>(*lit - previousValue)) < shortest)
			shortest = *lit - previousValue;
		if (shortest == 0)
			break;
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	if (this->list.empty())
		throw(empty());
	if (this->list.size() == 1)
		throw(oneElement());

	return (*this->list.rbegin() - *this->list.begin());
}

void	Span::printValues(void) const
{
	std::multiset<int>::const_iterator lit(this->list.begin()), lend(this->list.end());
	for (;lit != lend; lit++)
		std::cout << *lit << std::endl;
}

void	Span::addNumber(int nbr)
{
	if (this->list.size() >= this->_n )
		throw(sizeMax());
	std::multiset<int>::const_iterator lit(this->list.end());
	this->list.insert(lit, nbr);
}

void	Span::addMultiNumbers(Span & toCopy)
{
	if (this->list.size() + toCopy.list.size() > this->_n)
		throw (sizeMax());
	this->list.insert(toCopy.list.begin(), toCopy.list.end());
}
