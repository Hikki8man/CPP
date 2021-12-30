#include "Contact_list.hpp"

int main(void)
{
    Contact_list phone_book;
    std::string buf;

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
            if (phone_book.contact_nb == 8)
                std::cout << "List is full" << std::endl;
            else
                phone_book.add_contact();
        }
        else if (buf == "SEARCH")
        {
        	if (phone_book.search() == 1)
				break ;
        }
    }
	std::cout << "Bye bye"<< std::endl;
    return 0;
}