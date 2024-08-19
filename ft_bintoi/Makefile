CC = gcc
FLAG = -Wall -Wextra -Werror
EXE = test-ft_bintoi
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(FLAG) -o $@ $^

%.o : %.c
	$(CC) $(FLAG) -o $@ -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(EXE)

re : fclean all
	./$(EXE)

.PHONY : all clean fclean re