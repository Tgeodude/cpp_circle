#ifndef AFORM_HPP
#define AFORM_HPP

# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool sign;
    int gradeToSign;
    int gradeToExec;
public:
    AForm(/* args */);
    ~AForm();
    AForm(const AForm &src);
    AForm &operator=(const AForm &arg);
    AForm(std::string const &src, const int _gradeToSign, int _gradeToExec);

    int getGradeSignature() const ;
    int getGradeExecute() const ;
    std::string const getName() const ;
    bool getSign() const;
    void beSigned(Bureaucrat &src) ;
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

    virtual void execute(Bureaucrat const &executor) const = 0;
    
    class GradeTooHighToExecute : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowToExecute : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &cout, AForm const &src);

#endif