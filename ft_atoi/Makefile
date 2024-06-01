CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
FLAGS = -g -Wall -Wextra -Werror
EXE = test-ft_atoi

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXE)

re : fclean all
	./test-ft_atoi

.PHONY : all clean fclean re