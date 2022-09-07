SRC		=	main.cpp Zombie.cpp ZombieHorde.cpp
OBJ		=	$(SRC:.cpp=.o)
NAME	=	zombie
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
			./$(NAME)

re		:	fclean all

-include $(DEPENDS)