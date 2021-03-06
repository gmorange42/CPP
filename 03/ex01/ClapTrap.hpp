#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& ref);
		ClapTrap&	operator=(ClapTrap const& rhs);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	getAttackDamage(void) const;
	protected:
		std::string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
};

#endif
