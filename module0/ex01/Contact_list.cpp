#include "Contact_list.hpp"

Contact_list::Contact_list(void)
{
    this->contact_nb = 0;
}

Contact_list::~Contact_list()
{
}

Contact *Contact_list::get_next_contact(void)
{
    return(&this->list[this->contact_nb++]);
}