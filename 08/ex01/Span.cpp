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

void	Span::addNumber(int nbr)
{
	if (this->list.size() >= this->_n )
		throw(sizeMax());
	this->list.push_back(nbr);
	this->sorted_list.push_back(nbr);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->list.empty())
		throw(empty());
	if (this->list.size() == 1)
		throw(oneElement());

	this->sorted_list.sort();

	unsigned int	shortest = this->sorted_list.back() - this->sorted_list.front();
	int		previousValue;

	std::list<int>::const_iterator lit(this->sorted_list.begin());
	std::list<int>::const_iterator lend(this->sorted_list.end());

	for (;lit != lend;)
	{
		previousValue = *lit;
		lit++;
		if (*lit - previousValue < shortest)
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

	this->sorted_list.sort();

	return (this->sorted_list.back() - this->sorted_list.front());
}

void	Span::printValues(void) const
{
	std::list<int>::const_iterator lit(this->list.begin()), lend(this->list.end());
	for (;lit != lend; lit++)
		std::cout << *lit << std::endl;
}

void	Span::addMultiNumbers(unsigned int nbrOfTime, int toAdd)
{
	if (this->list.size() + nbrOfTime > this->_n)
		throw(sizeMax());

	std::list<int>::iterator lit(list.begin());
	advance(lit, this->list.size());
	this->list.insert(lit, nbrOfTime, toAdd);

	std::list<int>::iterator slit(sorted_list.begin());
	advance(slit, this->sorted_list.size());
	this->sorted_list.insert(slit, nbrOfTime, toAdd);
}
