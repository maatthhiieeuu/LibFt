CC = gcc
FLAG = -Wall -Wextra -Werror -g
EXE = test-ft_lstdelone
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

re : fclean all
	./$(EXE)

val : fclean all
	valgrind -s --leak-check=full --track-origins=yes ./$(EXE)

.PHONY : all clean fclean re