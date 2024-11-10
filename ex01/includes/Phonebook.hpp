#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{    
    private:
        Contact contact_list[8];
        int count;
    public:
        void    add();
        void    search();
        std::string	subString(std::string str);
        bool    digitCheck(std::string str);


        Phonebook();
        ~Phonebook();
};
#endif