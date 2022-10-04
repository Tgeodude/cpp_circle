#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
    private :
        Contact book[8];
        void ShowContactInfo(int count) const;

    public :
        void Add(int index);
        void Search(int count) const;
} ;

#endif