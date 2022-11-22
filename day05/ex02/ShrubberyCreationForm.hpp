#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <fstream>
class AFrom;
class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm(/* args */);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &arg);
    ShrubberyCreationForm(std::string target);

    std::string getTarget() const;
    void execute(Bureaucrat const &exec) const;
};


#endif
