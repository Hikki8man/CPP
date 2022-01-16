#include <iostream>

static char	*str_toupper(char *s)
{
    int i = -1;

    while (s[++i])
        s[i] = std::toupper(s[i]);
	return (s);
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
            std::cout << str_toupper(av[i]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}