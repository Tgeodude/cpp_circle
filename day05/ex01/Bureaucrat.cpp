#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade) {
    if (getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    if (getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    this->grade = src.getGrade();
}

std::string const Bureaucrat::getName() const {
    return (this->name);
}

int Bureaucrat::getGrade() const {
    return (this->grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &arg) {
    this->grade = arg.getGrade();
    return (*this);
}

void Bureaucrat::inCrease() {
    grade--;
    if (this->grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::deCrease() {
    grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &src) {
    cout << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return (cout);
}

void Bureaucrat::signForm(Form &src) {
    try
    {
        src.beSigned(*this);
        std::cout << name << " signed " << src.getName() <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}