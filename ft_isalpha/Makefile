#/* ********************************************************************************************* */
#/*                                                                                               */
#/*   Project : Libft/Makefile-ft_isalpha.c                  ::::::  ::::::    :::::::::              */
#/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
#/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
#/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
#/*                                                  ###    ###  ###   ###      ###               */
#/*   Created: 2024/05/11  by m.boegler             ###         ###   ###########                 */
#/*   Updated: 2024/05/11  by m.boegler            ###         ###   #########                    */
#/*                                                                                               */
#/* ********************************************************************************************* */

CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
EXEC = test-ft_isalpha

all : $(EXEC)

%.o : %.c
	$(CC) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

clean : 
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)

