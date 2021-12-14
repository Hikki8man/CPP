#include <iostream>

int main(void)
{
    char buff[50];
    
    std::cout << "Name: ";
    std::cin >> buff;
    std::cout << "Your name is " << buff;
    return (0);
}