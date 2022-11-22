#include "AForm.hpp"

AForm::AForm() {

}

AForm::~AForm() {

}

AForm::AForm(const AForm &src) {
    this->gradeToSign = src.getGradeSignature();
    this->gradeToExec = src.getGradeExecute();
    this->sign = src.getSign();
}

AForm &AForm::operator=(const AForm &src) {
    this->gradeToSign = src.getGradeSignature();
    this->gradeToExec = src.getGradeExecute();
    this->sign = src.getSign();
    return (*this);
}

AForm::AForm(std::string const &src, const int _gradeToSign, int _gradeToExec):
                                                                    name(src),
                                                                    sign(false),
                                                                    gradeToSign(_gradeToSign),
                                                                    gradeToExec(_gradeToExec)
{
    if (getGradeSignature() < 1 || getGradeExecute() < 1) {
	    throw AForm::GradeTooHighException();
	}
	else if (getGradeSignature() > 150 || getGradeExecute() > 150) {
		throw AForm::GradeTooLowException();
	}
}

std::string const AForm::getName() const {
    return (this->name);
}
int AForm::getGradeSignature() const {
    return (this->gradeToSign);
}
int AForm::getGradeExecute() const {
    return (this->gradeToExec);
}
bool AForm::getSign() const {
    return (this->sign);
}

void AForm::beSigned(Bureaucrat &src) {
    if(src.getGrade() <= getGradeSignature())
        sign = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &cout, AForm const &src)
{
    cout << src.getName() << std::endl;
    cout << "Grade needed to sign: " << src.getGradeSignature() << std::endl;
    cout << "Grade needed to execute: " << src.getGradeExecute() << std::endl;
    cout << std::endl;
    return cout;
}

const char *AForm::GradeTooHighToExecute::what(void) const throw()
{
	return ("Grade is too high to execute");
}

const char *AForm::GradeTooLowToExecute::what(void) const throw()
{
	return ("Grade is too low to execute");
}

