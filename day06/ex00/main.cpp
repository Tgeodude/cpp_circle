#include "Convert.hpp"

int main(int argc, char **argv)
{
	Convert	scalar;
	char 		*ptr;
	double 		num;

	try 
    {
		if (argc == 2)
		{
			num = strtod(argv[1], &ptr);
			if (&ptr[0] == &argv[1][0] && static_cast<std::string>(argv[1]).length() == 1)
				num = *ptr;
			if ((isprint(*ptr) && static_cast<std::string>(argv[1]).length() != 1)
			&& !(&ptr[0] != &argv[1][0]
			&& *ptr == 'f'
			&& static_cast<std::string>(ptr).length() == 1))
				throw Convert::impossibleToConvert();
			scalar.setValue(num);
			scalar.convert("char");
			scalar.convert("int");
			scalar.convert("float");
			scalar.convert("double");
		}
		else
			std::cerr << "Error: count argc != 2" << std::endl;
	}
	catch (Convert::impossibleToConvert& e)
	{
		std::cout << "Could not convert string to double representation" << std::endl;
	}
	return (0);
}
