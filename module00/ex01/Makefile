NAME	=	phonebook

SRC		=	main.cpp		\
			phonebook.cpp	\
			Contact.cpp

INC		=	Contact_list.hpp	\
			Contact.hpp

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