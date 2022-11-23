#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Intern intern;
	AForm*  nameForm1;
	try
	{
		nameForm1 = intern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	AForm*  nameForm2;
	try
	{
		nameForm2 = intern.makeForm("RobotomyRequestForm", "Aboba");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	AForm*  nameForm3;
	try
	{
		nameForm3 = intern.makeForm("PresidentialPardonForm", "Denis");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	AForm*  nameForm4;
	try
	{
		nameForm4 = intern.makeForm("ShrubberyCreationForm", "Andrew");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}