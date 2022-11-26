#include "easyfind.hpp"

int main(void) {
        std::vector<int> vect1(5);
	std::vector<int> vect2(10, 95); 
	std::list<int> list1;
	std::vector<char> vec_char(4);
	std::list<int> list_char(4);

	vect1.push_back(1);
	vect1.push_back(2);
	vect1.push_back(3);
	vect1.push_back(4);
	vect1.push_back(5);

	list1.push_back(14);
	list1.push_back(15);

	vec_char.push_back('a');
	vec_char.push_back('b');
	vec_char.push_back('o');
	vec_char.push_back('b');
	vec_char.push_back('a');

	
	list_char.push_back('a');
	list_char.push_back('b');
	list_char.push_back('c');
	list_char.push_back('d');

	try
	{
		easyfind(vect1, 1);
		easyfind(vect2, 95);
		easyfind(vect1, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------" << std::endl;
	
	try
	{
		easyfind(vec_char, 'a');
		easyfind(vec_char, 'r');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------" << std::endl;

	try
	{
		easyfind(list1, 14);
		easyfind(list1, 16);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------" << std::endl;
	
	try
	{
		easyfind(list_char, 'a');
		easyfind(list_char, 'r');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}