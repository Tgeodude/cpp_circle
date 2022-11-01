#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

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
        void setIndex(int _index);

        std:: string getFirstName(void) const;
        void setFirstName(std:: string _first);

        std:: string getLastName(void) const;
        void setLastName(std:: string _last);

        std:: string getNickname(void) const;
        void setNickname(std:: string _nick);

        std:: string getPhoneNumber(void) const;
        void setPhoneNumber(std:: string _phone);

        std:: string getDarkestSecret(void) const;
        void setDarkestSecret(std:: string _secret);

        void ShowList(void) const;
} ;

#endif