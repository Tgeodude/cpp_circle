#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool sign;
    int gradeToSign;
    int gradeToExec;
public:
    Form(/* args */);
    ~Form();
    Form(const Form &src);
    Form &operator=(const Form &arg);
    Form(std::string const &src, const int _gradeToSign, int _gradeToExec);
    int getGradeSignature() const;
    int getGradeExecute() const;
    std::string const getName() const;
    bool getSign() const;
    void beSigned(Bureaucrat &src);
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
};

std::ostream &operator<<(std::ostream &cout, Form const &src);

#endif