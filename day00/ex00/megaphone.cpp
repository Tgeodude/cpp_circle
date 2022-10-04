#include <iostream>

int main(int argc, char **argv)
{
    int i = 0;
    int j;

    while (++i < argc)
    {
		j = -1;
        while (argv[i][++j] != '\0')
            std:: cout << (char)toupper(argv[i][j]);
    }
	if (argc < 2)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std:: cout << std::endl;
	return (0);
}