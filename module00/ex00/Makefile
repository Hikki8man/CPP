NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	= 	-Wall -Werror -Wextra -std=c++98

CC		=	clang++

all		:	$(NAME)

%.o:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean $(NAME)

.phony	:	re clean fclean .c.o