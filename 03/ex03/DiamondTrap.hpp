#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	highFivesGuys(void);
	private:
		std::string ClapTrap::_clap_name;
		std::string	_name;
};

#endif
