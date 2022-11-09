#include "Harl.hpp"

void Harl::warning(void) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

Harl::arrOfFunc Harl::arr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

void Harl::complain(std::string level) {

	std::string all[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; level != all[i] && i < 4; i++){}
	switch(i)
	{
		case 4:
			std::cout << "[ Well, it is not a complain at all ]" << std::endl;
			break;
		default:
			(this->*arr[i])();
			break;
	}	
} 