CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = $(-Wall -Wextra -Werror) 
EXEC = test-ft_strlcpy

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -lbsd

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< 

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXEC)

re : clean fclean all
	./test-ft_strlcpy

.PHONY : all clean fclean re