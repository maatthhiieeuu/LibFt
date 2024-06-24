CC = gcc
FLAG = -Wall -Wextra -Werror
EXE = test-ft_putendl_fd
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(FLAG) -o $@ $^

%.o : %.c
	$(CC) $(FLAG) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXE) output.txt

re : fclean all
	./$(EXE)