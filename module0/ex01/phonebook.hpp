#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
private:
	/* data */
public:
	Contact		list[8];
	int     	contact_nb;

	int			add_contact(void);
	int			search(void);
	std::string	reformat(std::string s);
	Contact		*get_next_contact(void);
	Phonebook(void);
	~Phonebook(void);
};

#endif