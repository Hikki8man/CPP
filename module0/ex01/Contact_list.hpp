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

    void    add_contact(void);
    void    search(void);
    Contact *get_next_contact(void);
    Contact_list(void);
    ~Contact_list(void);
};

#endif