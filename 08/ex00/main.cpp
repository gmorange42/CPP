#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>


int 	main(void)
{
	std::cout << std::endl << "--LIST PART--" << std::endl;
	std::list<int> int_list;
	int_list.push_back(1);
	int_list.push_back(2);
	int_list.push_back(4);
	int_list.push_back(8);
	int_list.push_back(16);
	int_list.push_back(32);
	int_list.push_back(64);
	std::list<int>::const_iterator	lit(int_list.begin()), lend(int_list.end());
	for(;lit != lend; lit++)
		std::cout << *lit << std::endl;
	try {std::cout << easyfind(int_list, 32) << std::endl;}
	catch (std::exception & e) { std::cout << e.what() << std::endl;}
	try {std::cout << easyfind(int_list, 42) << std::endl;}
	catch (std::exception & e) { std::cout << e.what() << std::endl;}

	std::cout << std::endl << "--VECTOR PART--" << std::endl;
	std::vector<int> int_vect;
	int_vect.push_back(128);
	int_vect.push_back(256);
	int_vect.push_back(512);
	int_vect.push_back(1024);
	int_vect.push_back(2048);
	int_vect.push_back(4096);
	int_vect.push_back(8192);
	std::vector<int>::const_iterator vit, vend;
	vit = int_vect.begin();
	vend = int_vect.end();
	for(;vit != vend; vit++)
		std::cout << *vit << std::endl;
	try {std::cout << easyfind(int_vect, 4096) << std::endl;}
	catch (std::exception & e) { std::cout << e.what() << std::endl;}
	try {std::cout << easyfind(int_vect, 4095) << std::endl;}
	catch (std::exception & e) { std::cout << e.what() << std::endl;}

	std::cout << std::endl << "--SET PART--" << std::endl;
	std::set<int> int_set;
	int_set.insert(2048);
	int_set.insert(512);
	int_set.insert(8192);
	int_set.insert(1024);
	int_set.insert(256);
	int_set.insert(4096);
	int_set.insert(128);
	std::set<int>::const_iterator sit, send;
	sit = int_set.begin();
	send = int_set.end();
	for(;sit != send; sit++)
		std::cout << *sit << std::endl;
	try {std::cout << easyfind(int_set, 4096) << std::endl;}
	catch (std::exception & e) { std::cout << e.what() << std::endl;}
	try {std::cout << easyfind(int_set, 4095) << std::endl;}
	catch (std::exception & e) { std::cout << e.what() << std::endl;}
	return (0);
}
