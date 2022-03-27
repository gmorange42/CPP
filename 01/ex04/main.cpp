#include <iostream>
#include <string>
#include <fstream>

int	main(int av, char **ac)
{
	std::string	temp;
	std::size_t	found;
	if (av != 4)
	{
		std::cout << "Error, three parameters required" << std::endl;
		return (1);
	}
	std::ifstream	ifs(ac[1]);
	if (!ifs)
	{
		std::cout << "ifstream failed" << std::endl;
		return (1);
	}
	std::string	outFileName = ac[1];
	outFileName += ".replace";
	std::ofstream	ofs(outFileName);
	if (!ofs)
	{
		std::cout << "ofstream failed" << std::endl;
		return (1);
	}
	while (getline(ifs, temp))
	{
		found = 0;
		std::cout << temp << std::endl;
//		found = temp.find(ac[2], 0);i	
//		std::cout << "TEST : " << std::string::npos << ' ' << found << std::endl;
		while (found != std::string::npos)
		{
			found = temp.find(ac[2]);
			if (found != std::string::npos)
			{
			
			}
			std::cout << "TEST : " << std::string::npos << ' ' << found << std::endl;
		}
		ofs << temp << std::endl;
	}
	return (0);
}
