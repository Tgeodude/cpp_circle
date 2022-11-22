#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("none") {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm", 72, 45) {
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &arg) {
    this->target = arg.getTarget();
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 72, 45), target(_target) {

}

std::string RobotomyRequestForm::getTarget() const{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &exec) const {
    int	number;

	if (exec.getGrade() <= getGradeExecute())
	{
		number = rand() % 100;
		std::cout << "~(±_±)drilling(±_±)~" << std::endl;
		if (number % 2)
			std::cout << exec.getName() << " has been robotomised ..." << std::endl;
		else
			std::cout << exec.getName() << " failed to be robotomised !" << std::endl;
	}
	else
		throw GradeTooLowToExecute();	
}
