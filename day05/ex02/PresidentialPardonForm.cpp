#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm ("PresidentialPardonForm", 25, 5), target("none") {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardonForm", 25, 5) {
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &arg) {
    this->target = arg.getTarget();
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) 
: AForm("PresidentialPardonForm", 25, 5), target(_target) 
{

}
std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
    if(exec.getGrade() <= getGradeExecute())
        std::cout << this->target << " has been pardoned by Zaphod Beelbrox" <<std::endl;
    else
        throw GradeTooLowToExecute();
}

