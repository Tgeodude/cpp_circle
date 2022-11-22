#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) {
    try {
        Form f1 = Form("Form1", 10, 5);
        Bureaucrat b1 = Bureaucrat("Lol", 30);
        Bureaucrat b2 = Bureaucrat("Kek", 1);

        std::cout << f1 << std::endl;

        b1.signForm(f1);
        std::cout<<std::endl;
        b2.signForm(f1);
        std::cout<<std::endl;

        Form f2 = Form("Form2", 0, 5);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}