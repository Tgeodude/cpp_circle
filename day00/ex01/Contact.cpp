#include <iostream>
#include <iomanip>
#include "Contact.hpp"

void Contact::ShowList(void) const {
    std::cout << std::setw(40) << "Contact Info\n" << std::endl;
	std::cout << "• First Name		: " << this->first_name << std::endl;
    std::cout << "• Last Name		: " << this->last_name << std::endl;	
	std::cout << "• Nicname    		: " << this->nickname << std::endl;
    std::cout << "• Phone Number	: " << this->phone_number << std::endl;	
	std::cout << "• Darkest secret  : " << this->darkest_secret << std::endl;
}

int Contact::getIndex(void) const {
    return (this->index);
}

void Contact::setIndex(int index) {
    this->index = index;
}

std:: string Contact::getFirstName(void) const {
    return (this->first_name);
}

void Contact::setFirstName(std:: string first) {
    this->first_name = first;
}

std:: string Contact::getLastName(void) const {
    return (this->last_name);
}

void Contact::setLastName(std:: string last) {
    this->last_name = last;
}

std:: string Contact::getNickname(void) const {
    return (this->nickname);
}

void Contact::setNickname(std:: string nick) {
    this->nickname = nick;
}

std:: string Contact::getPhoneNumber(void) const {
    return (this->phone_number);
}

void Contact::setPhoneNumber(std:: string phone) {
    this->phone_number = phone;
}

std:: string Contact::getDarkestSecret(void) const {
    return (this->darkest_secret);
}

void Contact::setDarkestSecret(std:: string secret){
    this->darkest_secret = secret;
}