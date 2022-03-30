#include "Harl.hpp"

Harl::Harl()
{
	levelTab[0] = "DEBUG";
	levelTab[1] = "INFO";
	levelTab[2] = "WARNING";
	levelTab[3] = "ERROR";
	funcTab[0] = &Harl::debug;
	funcTab[1] = &Harl::info;
	funcTab[2] = &Harl::warning;
	funcTab[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	int i = 0;
	while (levelTab[i] != level && i < 4)
	{
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*funcTab[0])();
		case 1:
			(this->*funcTab[1])();
		case 2:
			(this->*funcTab[2])();
		case 3:
			(this->*funcTab[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl; 
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable!" << std::endl << "I want to speak to the manager now." << std::endl << std::endl;
}
