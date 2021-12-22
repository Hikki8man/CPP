#include <iostream>

void    s_toupper(char *s)
{
    int i = -1;

    while (s[++i])
        s[i] = std::toupper(s[i]);
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[i])
        {
            s_toupper(av[i]);
            std::cout << av[i];
            i++;
            if (av[i])
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
    return (0);
}