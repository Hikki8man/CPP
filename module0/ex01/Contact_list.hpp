#ifndef CONTACT_LIST_HPP
# define CONTACT_LIST_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Contact_list
{
private:
    /* data */
public:
    Contact list[8];
    int     contact_nb;

    Contact *get_next_contact(void);
    Contact_list(void);
    ~Contact_list(void);
};

#endif