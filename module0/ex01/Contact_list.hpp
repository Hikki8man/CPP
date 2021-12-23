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
    Contact index[8];
    Contact_list(void);
    ~Contact_list(void);
};

#endif