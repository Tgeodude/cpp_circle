#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
private:
    std::string name;
    int         grade;
public:
    Bureaucrat(/* args */);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &arg);
    Bureaucrat(std::string _name, int _grade);
    std::string const getName() const;
    int getGrade() const;

    void inCrease();
    void deCrease();

    class GradeTooHighException: public std::exception 
    {
        public :
            virtual const char *what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &src);

#endif