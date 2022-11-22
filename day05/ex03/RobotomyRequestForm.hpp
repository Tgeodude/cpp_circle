#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
class AFrom;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm(/* args */);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &arg);
    RobotomyRequestForm(std::string _target);

    std::string getTarget() const;
    void execute(Bureaucrat const &exec) const;
};


#endif