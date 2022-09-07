SRC		=	main.cpp Fixed.cpp
OBJ		=	$(SRC:.cpp=.o)
NAME	=	fixed
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -MD -MP -std=c++98
DEPENDS :=	$(SRC:.cpp=.d)


.PHONY	:	all re clean fclean

all		:	$(NAME)

$(NAME)	:	$(OBJ) Makefile
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o		:	%.cpp
			$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

clean	:	
			rm -f *.o

fclean	:	clean
			rm -f $(NAME) $(DEPENDS)

x		:	all
			./$(NAME) Warning

re		:	fclean all

-include $(DEPENDS)