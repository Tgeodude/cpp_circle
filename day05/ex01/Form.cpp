#include "Form.hpp"

Form::Form() {

}

Form::~Form() {

}

Form::Form(const Form &src) {
    this->gradeToSign = src.getGradeSignature();
    this->gradeToExec = src.getGradeExecute();
    this->sign = src.getSign();
}

Form &Form::operator=(const Form &src) {
    this->gradeToSign = src.getGradeSignature();
    this->gradeToExec = src.getGradeExecute();
    this->sign = src.getSign();
    return (*this);
}

Form::Form(std::string const &src, const int _gradeToSign, int _gradeToExec):
                                                                    name(src),
                                                                    sign(false),
                                                                    gradeToSign(_gradeToSign),
                                                                    gradeToExec(_gradeToExec)
{
    if (getGradeSignature() < 1 || getGradeExecute() < 1) {
	    throw Form::GradeTooHighException();
	}
	else if (getGradeSignature() > 150 || getGradeExecute() > 150) {
		throw Form::GradeTooLowException();
	}
}

std::string const Form::getName() const {
    return (this->name);
}
int Form::getGradeSignature() const {
    return (this->gradeToSign);
}
int Form::getGradeExecute() const {
    return (this->gradeToExec);
}
bool Form::getSign() const {
    return (this->sign);
}

void Form::beSigned(Bureaucrat &src) {
    if(src.getGrade() <= getGradeSignature())
        sign = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &cout, Form const &src)
{
    cout << src.getName() << std::endl;
    cout << "Grade needed to sign: " << src.getGradeSignature() << std::endl;
    cout << "Grade needed to execute: " << src.getGradeExecute() << std::endl;
    cout << std::endl;
    return cout;
}

