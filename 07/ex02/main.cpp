#include "Array.hpp"

int	main(void)
{
	std::cout << "--INT PART--" << std::endl;
	Array<int> int_test1;
	Array<int> int_test2(3);

	for (int i=0; i < int_test2.size(); i++)
		int_test2[i] = i;
	
	Array<int> int_test3(int_test2);

	std::cout << "Size of int_test1 : " << int_test1.size() << std::endl;
	std::cout << "Size of int_test2 : " << int_test2.size() << std::endl;
	std::cout << "Size of int_test3 : " << int_test3.size() << std::endl;
	std::cout << std::endl;
	
	try {std::cout << int_test1[0] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {std::cout << int_test2[4] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {std::cout << int_test3[2] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;

	int_test2.print();
	std::cout << std::endl;

	int_test1 = int_test2;
	try {int_test1[0] = -1;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {int_test2[1] = -2;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {int_test3[2] = -3;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {int_test3[-1] = -3;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}

	int_test1.print();
	std::cout << std::endl;

	int_test2.print();
	std::cout << std::endl;

	int_test3.print();
	std::cout << std::endl;


	std::cout << "--DOUBLE PART--" << std::endl;
	Array<double> double_test1;
	Array<double> double_test2(3);

	for (int i=0; i < double_test2.size(); i++)
		double_test2[i] = i + static_cast<double>(i) / 10;
	
	Array<double> double_test3(double_test2);
	
	std::cout << "Size of int_test1 : " << int_test1.size() << std::endl;
	std::cout << "Size of int_test2 : " << int_test2.size() << std::endl;
	std::cout << "Size of int_test3 : " << int_test3.size() << std::endl;
	std::cout << std::endl;

	try {std::cout << double_test1[0] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {std::cout << double_test2[4] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {std::cout << double_test3[2] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;

	double_test2.print();
	std::cout << std::endl;

	double_test1 = double_test2;
	try {double_test1[0] = -1.4324;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {double_test2[1] = -2.6465;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {double_test3[2] = -3.000543;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {double_test3[-1] = -3.000543;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}

	double_test1.print();
	std::cout << std::endl;

	double_test2.print();
	std::cout << std::endl;

	double_test3.print();
	std::cout << std::endl;


	std::cout << "--STRING PART--" << std::endl;
	Array<std::string> string_test1;
	Array<std::string> string_test2(3);

	string_test2[0] = "One";
	string_test2[1] = "Two";
	string_test2[2] = "Three";
	
	Array<std::string> string_test3(string_test2);

	std::cout << "Size of int_test1 : " << int_test1.size() << std::endl;
	std::cout << "Size of int_test2 : " << int_test2.size() << std::endl;
	std::cout << "Size of int_test3 : " << int_test3.size() << std::endl;
	std::cout << std::endl;
	
	try {std::cout << string_test1[0] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {std::cout << string_test2[4] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {std::cout << string_test3[2] << std::endl;}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;

	string_test2.print();
	std::cout << std::endl;

	string_test1 = string_test2;
	try {string_test1[0] = "Four";}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {string_test2[1] = "Five";}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {string_test3[2] = "Six";}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}
	try {string_test3[-1] = "Six";}
	catch (std::exception & e) {std::cout << e.what() << std::endl;}

	string_test1.print();
	std::cout << std::endl;

	string_test2.print();
	std::cout << std::endl;

	string_test3.print();
	std::cout << std::endl;

	return (0);
}
