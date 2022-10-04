#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact {
    private :
        int index;
        std:: string first_name;
        std:: string last_name;
        std:: string nickname;
        std:: string phone_number;
        std:: string darkest_secret;

    public :
        int getIndex(void) const;
        void setIndex(int index);

        std:: string getFirstName(void) const;
        void setFirstName(std:: string first);

        std:: string getLastName(void) const;
        void setLastName(std:: string last);

        std:: string getNickname(void) const;
        void setNickname(std:: string nick);

        std:: string getPhoneNumber(void) const;
        void setPhoneNumber(std:: string phone);

        std:: string getDarkestSecret(void) const;
        void setDarkestSecret(std:: string secret);

        void ShowList(void) const;
} ;

#endif