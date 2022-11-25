#include "Base.hpp"

Base *generate(void) {
    srand(time(NULL));
	switch (rand() % 3){
		case 0:
			std::cout << "[A] generate!" << std::endl;;
			return new A();
		case 1:
			std::cout << "[B] generate!" << std::endl;;
			return new B();
		case 2:
			std::cout << "[C] generate!" << std::endl;;
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Error";
}

void identify(Base &base) {
	try 
    {
		(void)dynamic_cast<A&>(base);
		std::cout << "A" << std::endl;
	} 
    catch (const std::exception &e) {}
	try 
    {
		(void)dynamic_cast<B&>(base);
		std::cout << "B" << std::endl;
	} 
    catch (const std::exception &e) {}
	try 
    {
		(void)dynamic_cast<C&>(base);
		std::cout << "C" << std::endl;
	} 
    catch (const std::exception &e) {}
}

int main(void) 
{
    Base *obj = generate();
    std::cout << "Pounter: ";
    identify(obj);
    std::cout << "Adress: ";
    identify(*obj);
    delete obj;

}