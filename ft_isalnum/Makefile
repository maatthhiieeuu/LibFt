CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
EXEC = test-ft_isalnum
CFLAGS = -Wall -Wextra -Werror

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean : 
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)