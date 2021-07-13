NAME = ex03

CFLAG = -Wall -Werror -Wextra

RM = rm -rf

SRC = $(shell find . -name '*.cpp')

OBJ = $(SRC:.cpp=.o)

all:
	$(MAKE) $(NAME) -j 4

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

%.o: %.cpp
	clang++ -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
