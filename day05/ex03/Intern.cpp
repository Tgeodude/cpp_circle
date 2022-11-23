#include "Intern.hpp"

Intern::Intern(){
	
}

Intern::~Intern(){

}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern &Intern::operator=(Intern const &arg) {
	if (this == &arg)
		return (*this);
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string const target)
{
    std::string arr[3]=
    {
        "RobotomyRequestForm",
        "PresidentialPardonForm",
        "ShrubberyCreationForm",
    };
    int i = 0;
    while(arr[i] != name && i < 3)
        i++;
    switch (i)
    {
        case 0:
            std::cout <<"Intern creates " << name << " to " << target <<std::endl;
            return(new RobotomyRequestForm(target));
            break;
        case 1:
            std::cout << "Intern creates " << name << " to " << target <<std::endl;
             return(new PresidentialPardonForm(target));
            break;
        case 2:
            std::cout << "Intern creates " << name << " to " << target <<std::endl;
             return(new ShrubberyCreationForm(target));
            break;
        default:
            std::cout << "Intern is trying to create " << name << " to " << target <<std::endl;
            throw Intern::InternCannotCreateForm();
            break;
    }
    return NULL;
}

const char*Intern::InternCannotCreateForm::what() const throw()
{
    return ("Intern can't create this form!");
}