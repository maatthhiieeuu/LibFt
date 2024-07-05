CC = gcc
FLAG = -Wall -Wextra -Werror
EXE = test-ft_lstlast
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
	rm -rf $(EXE)

re : fclean all clean
	./$(EXE)

.PHONY : all clean fclean re
