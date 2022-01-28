NAME	=	rpg

SRC		=	main.cpp			\
			AMateria.cpp		\
			IMateriaSource.cpp	\
			ICharacter.cpp		\
			MateriaSource.cpp 	\
			Mage.cpp			\
			Ice.cpp				\
			Cure.cpp

			

INC		=	AMateria.hpp		\
			IMateriaSource.hpp	\
			ICharacter.hpp		\
			MateriaSource.hpp	\
			Mage.hpp			\
			Ice.hpp				\
			Cure.hpp

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	= 	-Wall -Werror -Wextra -std=c++98

CC		=	c++

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