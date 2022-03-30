#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string	levelTab[4];
		typedef void	(Harl::* ptrTab)(void);
		ptrTab	funcTab[4];
};

#endif
