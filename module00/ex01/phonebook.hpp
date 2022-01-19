#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact		list[8];
	int     	contact_nb;

public:
	Phonebook(void);
	~Phonebook(void);

	int			add_contact(void);
	int			search(void);
	std::string	reformat(std::string s);
	Contact		*get_next_contact(void);
};

#endif