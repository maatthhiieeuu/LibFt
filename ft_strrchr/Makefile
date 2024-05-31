CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
EXEC = test-ft_strrchr

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXEC)

re : fclean all
	./test-ft_strrchr

.PHONY : all clean fclean re