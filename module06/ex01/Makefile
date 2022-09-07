SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
NAME	=	casts
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
			rm -f *.o $(DEPENDS)

fclean	:	clean
			rm -f $(NAME)

x		:	all
			./$(NAME)

test	:	all
			./$(NAME) 42
			@echo "----------------"
			./$(NAME) 42.4234f
			@echo "----------------"
			./$(NAME) -42
			@echo "----------------"
			./$(NAME) 0
			@echo "----------------"
			./$(NAME) -inff
			@echo "----------------"
			./$(NAME) +inff
			@echo "----------------"
			./$(NAME) nanf
			@echo "----------------"
			./$(NAME) nan
			@echo "----------------"

leaks	:	all
			leaks --atExit -- ./$(NAME)

re		:	fclean all

-include $(DEPENDS)