#include "Contact_list.hpp"

Contact_list::Contact_list(void)
{
    this->contact_nb = 0;
}

Contact_list::~Contact_list()
{
}

Contact	*Contact_list::get_next_contact(void)
{
    return(&this->list[this->contact_nb++]);
}

void	Contact_list::add_contact(void)
{
    Contact *tmp = this->get_next_contact();
    std::cout << "Enter first name : ";
    std::getline(std::cin, tmp->first_name);
    std::cout << "Enter last name : ";
    std::getline(std::cin, tmp->last_name);
    std::cout << "Enter nickname : ";
    std::getline(std::cin, tmp->nickname);
    std::cout << "Enter phone number : ";
    std::getline(std::cin, tmp->phone_number);
    std::cout << "Enter his/her darkest secret : ";
    std::getline(std::cin, tmp->secret);
}

std::string 	Contact_list::reformat(std::string s)
{
	if (s.length() > 10)
	{
		std::string	tmp = s.substr(0, 10);
		tmp[9] = '.';
		return (tmp);
	}
	return(s);
}

void	Contact_list::search(void)
{
    if (this->contact_nb == 0)
    {
        std::cout << "Empty list" << std::endl;
        return ;
    }
    std::cout << "index     |first name|last name |nickname  " << std::endl;
	std::cout << std::setfill(' ') << std::right;
	for (int i = 0; i < this->contact_nb; i++)
	{
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->reformat(this->list[i].first_name) << "|";
        std::cout << std::setw(10) << this->reformat(this->list[i].last_name) << "|";
        std::cout << std::setw(10) << this->reformat(this->list[i].nickname) << std::endl;
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
			exit (1);
		index = std::stoi(buf);
		if (index < 0 || index >= this->contact_nb)
			continue ;
		std::cout << "First name : " << this->list[index].first_name << std::endl;
		std::cout << "Last name : " << this->list[index].last_name << std::endl;
		std::cout << "Nickname : " << this->list[index].nickname << std::endl;
		std::cout << "Phone number : " << this->list[index].phone_number << std::endl;
		std::cout << "Darkest secret : " << this->list[index].secret << std::endl;
		break ;
	}
}