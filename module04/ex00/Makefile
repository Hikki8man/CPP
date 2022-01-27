NAME	=	polymorphism

SRC		=	main.cpp	\
			Animal.cpp	\
			Cat.cpp	\
			Dog.cpp	\
			WrongAnimal.cpp \
			WrongCat.cpp

INC		=	Animal.hpp	\
			Dog.hpp	\
			Cat.hpp	\
			WrongAnimal.hpp	\
			WrongCat.hpp

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	= 	-Wall -Werror -Wextra -std=c++98

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