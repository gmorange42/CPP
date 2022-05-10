#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template< typename T >
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}

		MutantStack(MutantStack const & rhs)
		{
			*this = rhs;
		}

		MutantStack&	operator=(MutantStack const & rhs)
		{
			this->_mutantStack = rhs._mutantStack;
			return (*this);
		}

		~MutantStack(void) {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return (this->c.end());
		}
	private:
		std::stack<T>	_mutantStack;
};

#endif
