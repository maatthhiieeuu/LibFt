CC = gcc
EXE = test-ft_itobin
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) -o $@ $^

%.o : %.c
	$(CC) -o $@ -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(EXE)

re : fclean all
	./$(EXE)

.PHONY : all clean fclean re