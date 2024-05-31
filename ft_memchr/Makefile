CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror 
EXE = test-ft_memchr

all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXE)

re : fclean all
	./test-ft_memchr

.PHONY : all clean fclean re