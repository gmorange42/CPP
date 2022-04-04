#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	temp;
	std::size_t	found;
	std::string	old_str;
	std::string	new_str;
	if (ac != 4)
	{
		std::cout << "Error, three parameters required" << std::endl;
		return (1);
	}
	old_str = av[2];
	new_str = av[3];
	if (old_str.empty() or new_str.empty())
	{
		std::cout << "Error, Invalid argument" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs)
	{
		std::cout << "ifstream failed" << std::endl;
		return (1);
	}
	std::string	outFileName = av[1];
	outFileName += ".replace";
	std::ofstream	ofs(outFileName.c_str());
	if (!ofs)
	{
		std::cout << "ofstream failed" << std::endl;
		return (1);
	}
	while (getline(ifs, temp))
	{
		found = 0;
		while (found < temp.size() && found != std::string::npos)
		{
			found = temp.find(old_str, found);
			if (found < temp.size() && found != std::string::npos) 
			{
				temp.erase(found, old_str.size());
				temp.insert(found, new_str);
				found += new_str.size();
			}
		}
		ofs << temp << std::endl;
	}
	return (0);
}
