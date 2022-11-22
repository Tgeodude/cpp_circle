#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm(/* args */);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &arg);
    PresidentialPardonForm(std::string _target);

    std::string getTarget() const;
    void execute(Bureaucrat const &exec) const;
};


#endif