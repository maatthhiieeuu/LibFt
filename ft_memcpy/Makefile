CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
EXEC = test-ft_memcpy

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC)  -o $@ $^

%.o : %.c
	$(CC)  -o $@ -c $<

clean : 
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)

re : mrproper all

.PHONY : all clean mrproper all