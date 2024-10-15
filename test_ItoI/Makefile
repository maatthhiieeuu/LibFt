CC = gcc
EXE = test_ItoI
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Wextra -Werror -g

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
