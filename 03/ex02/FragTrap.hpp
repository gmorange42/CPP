#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& ref);
		FragTrap&	operator=(FragTrap const& rhs);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
