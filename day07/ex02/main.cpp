#include "Array.hpp"

int main (void) {
		
	Array<int> arr_int(10);
	
	try
	{
        std::cout << arr_int[5] << std::endl;
		std::cout << arr_int[12] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
    std::cout << std::endl;

	unsigned int i = 0;
	Array<char> arr_char(10);
	for(i = 0; i < arr_char.size(); i++)
		arr_char[i] = 'A' + i;
	try
	{
	    for(i = 0; i < arr_char.size(); i++)
		    std::cout << arr_char[i] << " = arr[" << i << "]" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << std::endl;
    std::cout << std::endl;

	i = 0;
	Array<double> arr_double(10);
	for(i = 0; i < arr_double.size(); i++)
		arr_double[i] = (rand() % 100)+0.05;
	try
	{
		for(i = 0; i < arr_double.size(); i++)
			std::cout << arr_double[i] << " = arr[" << i << "]" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
    std::cout << std::endl;

    try
	{
        Array<std::string> arr_string(2);
		
	    arr_string[0] = "hello";
	    arr_string[1] = "world";
		Array<std::string> arr_str_copy(arr_string);
		std::cout << "String: " << arr_string[0] << ' ' << arr_string[1] << std::endl;
		std::cout << "Copy: " << arr_str_copy[0] << ' ' << arr_str_copy[1] << std::endl;
		std::cout << arr_string[5] << std::endl;
	}
    catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}