#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("none") {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("ShrubberyCreationForm", 145, 137) {
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &arg) {
    this->target = arg.getTarget();
    return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("ShrubberyCreationForm", 145, 137), target(_target) {

}

std::string ShrubberyCreationForm::getTarget() const {
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{
    	if (exec.getGrade() <= getGradeExecute())
	{
		std::cout << exec.getName() << " draw a tree in the file" << std::endl;
		std::ofstream file(this->target + "_shrubbery");
		std::string line;
		
		line.append("       	  &&& &&  & && \n");
		line.append("		&& &\\/&\\|& ()|/ @, && \n");
		line.append("		&\\/(/&/&||/& /_/)_&/_& \n");
		line.append("	&() &\\/&|()|/&\\/ '% & _&& & \n");
		line.append("	&_\\_&&_\\ |& |&&/&__%_/_& && \n");
		line.append("	&&   && & &| &| /& & % ()& /&& \n");
		line.append("	()&_---()&\\&\\|&&-&&--%---()~ \n");
		line.append("		&&     \\||| \n");
		line.append("				||| \n");
		line.append("				||| \n");
		line.append("				||| \n");
		line.append("		, -=-~  .-^- _ \n");
		
		file << line << std::endl;
		file.close();
	}
	else
		throw GradeTooLowToExecute();
}