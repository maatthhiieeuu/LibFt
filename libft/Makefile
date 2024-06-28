SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC = gcc
AR = ar rcs
FLAG = -Wall -Wextra -Werror
TEST = test_libft
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(TEST)

re: fclean all

test: $(NAME)
	$(CC) $(FLAG) -o $(TEST) main.c $(NAME)
	./$(TEST)

.PHONY: all clean fclean re test
