#include "phonebook.hpp"

int main(void)
{
    Phonebook	phone_book;
    std::string	buf;

     while (1)
    {
        std::cout << "Enter a new command : ";
        std::getline(std::cin, buf);
		if (std::cin.eof())
			break ;
        if (buf == "EXIT")
            break ;
        else if (buf == "ADD")
        {
            if (phone_book.getContactNb() == 8)
                std::cout << "List is full" << std::endl;
            else if (!phone_book.add_contact())
				break ;
        }
        else if (buf == "SEARCH")
        {
        	if (phone_book.search() == 1)
				break ;
        }
    }
	std::cout << std::endl << "Bye bye" << std::endl;
    return 0;
}