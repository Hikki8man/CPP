#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->_contact_nb = 0;
}

Phonebook::~Phonebook()
{
}

Contact	*Phonebook::get_next_contact(void)
{
    return(&this->list[this->_contact_nb++]);
}

void setContactValue(Contact & contact, std::string const & buf, int const & index) {
	switch (index)
	{
		case 0 :
			contact.setFirstName(buf);
			break ;
		case 1 :
			contact.setLastName(buf);
			break ;
		case 2 :
			contact.setNickname(buf);
			break ;
		case 3 :
			contact.setPhoneNumber(buf);
			break ;
		case 4 :
			contact.setSecret(buf);
	}
}

int	Phonebook::add_contact(void)
{
    Contact		*tmp = this->get_next_contact();
	std::string	buf;
	std::string toPrint[5] = { "first name", "last name", "nickname", "phone number", "secret"};

	for (int i = 0; i < 5; ++i) {
		std::cout << "Enter " << toPrint[i] << ": ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return 0;
		else if (buf.empty() || (i == 3 && buf.find_first_not_of("0123456789") != std::string::npos)) {
			--i;
			continue ;
		}
		setContactValue(*tmp, buf, i);
	}
	
	return 1;
}

std::string 	Phonebook::reformat(std::string s)
{
	if (s.length() > 10)
	{
		std::string	tmp = s.substr(0, 10);
		tmp[9] = '.';
		return (tmp);
	}
	return(s);
}

int	Phonebook::search(void)
{
    if (this->_contact_nb == 0)
    {
        std::cout << "Empty list" << std::endl;
        return 0;
    }
    std::cout << "  index   |first name|last name | nickname " << std::endl;
	std::cout << std::setfill(' ') << std::right;
	for (int i = 0; i < this->_contact_nb; i++)
	{
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->reformat(this->list[i].getFirstName()) << "|";
        std::cout << std::setw(10) << this->reformat(this->list[i].getLastName()) << "|";
        std::cout << std::setw(10) << this->reformat(this->list[i].getNickname()) << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;

	std::string	str;
	int index;
	while (true)
	{
		std::cout << "Entrer l'index du contact que vous souhaitez : ";
		std::string buf;
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return 1;
		try
		{
			index = std::stoi(buf);
		}
		catch (...)
		{
			continue ;
		}
		if (index < 0 || index >= this->_contact_nb)
			continue ;
		std::cout << "First name : " << this->list[index].getFirstName() << std::endl;
		std::cout << "Last name : " << this->list[index].getLastName() << std::endl;
		std::cout << "Nickname : " << this->list[index].getNickname() << std::endl;
		std::cout << "Phone number : " << this->list[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << this->list[index].getSecret() << std::endl;
	
		return 0;
	}
}

int		Phonebook::getContactNb() const
{
	return this->_contact_nb;
}