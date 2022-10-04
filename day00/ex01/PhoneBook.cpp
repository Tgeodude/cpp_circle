#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::Add(int index) {
    Contact new_cont;
    std:: string tmp;

    new_cont.setIndex(index);
    std:: cout << "Enter first name" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setFirstName(tmp);
    std:: cout << "Enter last name" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setLastName(tmp);
    std:: cout << "Enter nickname" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setNickname(tmp);
    std:: cout << "Enter phone number" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setPhoneNumber(tmp);
    std:: cout << "Enter darkest secret" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setDarkestSecret(tmp);
}

void PhoneBook::ShowContactInfo(int count) const {
    
}