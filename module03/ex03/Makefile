NAME	=	DiamondTrap

SRC		=	ClapTrap.cpp	\
			ScavTrap.cpp	\
			FragTrap.cpp	\
			DiamondTrap.cpp	\
			main.cpp

INC		=	ClapTrap.hpp	\
			ScavTrap.hpp	\
			FragTrap.hpp	\
			DiamondTrap.hpp

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	= 	-Wall -Werror -Wextra -std=c++98 -Wshadow

CC		=	clang++

all		:	$(NAME)

%.o:	%.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean $(NAME)

.phony	:	re clean fclean .c.o