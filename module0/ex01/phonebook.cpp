#include "Contact_list.hpp"

int main(void)
{
    Contact_list phone_book;
    std::string buf;

    while (1)
    {
        std::cout << "Enter a new command : ";
        // std::getline(std::cin, buf);
        if (std::getline(std::cin, buf) == 0)
            return (1);
        if (buf == "ADD")
        {
            if (phone_book.contact_nb == 8)
                std::cout << "List is full" << std::endl;
            else
            {
                Contact *tmp = phone_book.get_next_contact();
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
        } 
    }
}