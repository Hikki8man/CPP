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

void	Contact_list::search(void)
{
	for (int i = 0; i < this->contact_nb; i++)
	{
		std::cout << "Name : " << this->list[i].first_name << std::endl;
	}
}