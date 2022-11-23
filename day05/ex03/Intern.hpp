#ifndef INTERN_HPP
#define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>

class Intern
{
private:
	/* data */
public:
	Intern(/* args */);
	~Intern();
	Intern(const Intern &src);
	Intern &operator=(Intern const &arg);

	AForm *makeForm(std::string name, std::string const target);
    class InternCannotCreateForm:public std::exception
    {
        public:
        virtual const char *what() const throw();
    };
};


#endif