CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = $(-Wall -Wextra -Werror)
EXEC = test-ft_memmove

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean : 
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)

re : mrproper all
	./test-ft_memmove

.PHONY : all clean mrproper re
