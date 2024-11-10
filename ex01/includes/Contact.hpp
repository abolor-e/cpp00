#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>

class Contact
{    
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string dark;
        int   i;

    public:
        void    setFirstName(std::string& str);
        void    setLastName(std::string& str);
        void    setNickname(std::string& str);
        void    setPhoneNumber(std::string& str);
        void    setSecret(std::string& str);
        void    setIndex(int i);

        int    getIndex();
        std::string& getFirstName();
        std::string& getLastName();
        std::string& getNickname();
        std::string& getPhoneNumber();
        std::string& getDark();
        Contact();
        ~Contact();
};

#endif