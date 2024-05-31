CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
EXE = test-ft_memcmp

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

%.o : %.c
	$(CC) $(FLAG) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXE)

re : fclean all
	./test-ft_memcmp

.PHONY : all clean fclean re