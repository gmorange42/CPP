#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array
{
	public:
		Array(void) : _size(0), _array(NULL) {}

		Array(unsigned int n) : _size(n)
		{
			_array = new T[n]();
		}

		Array(Array const& ref)
		{
			this->_array = NULL;
			*this = ref;
		}

		Array&	operator=(Array const& rhs)
		{
			if (this->_array)
				delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (int i=0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		~Array(void)
		{
			if (this->_array)
				delete [] _array;
		}

		T&	operator[](int i) const
		{
			if (i < 0 || i > this->_size - 1)
					throw(InvalidIndex());
			return (this->_array[i]);
		}

		void	print(void) const
		{
			for (int i=0; i < this->_size; i++)
				std::cout << this->_array[i] << std::endl;
		}

		int	size(void) const
		{
			return(this->_size);
		}

	private:
		int	_size;
		T*	_array;
		class	InvalidIndex : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid index.");
				}
		};
};

#endif
