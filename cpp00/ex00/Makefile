NAME = megaphone

CFLAG = -Wall -Werror -Wextra

RM = rm -rf

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(MAKE) $(NAME) -j 4

$(NAME): $(OBJ) $(LIBFT)
	g++ -o $(NAME) $(OBJ)

%.o: %.c
	g++ -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
