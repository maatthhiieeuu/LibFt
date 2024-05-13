#/* ********************************************************************************************* */
#/*                                                                                               */
#/*   Project : libft/main-ft_isdigit/Makefile           ::::::  ::::::    :::::::::              */
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
EXEC = test-ft_isdigit
CFLAGS = -Wall -Wextra -Werror

all : $(EXEC)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)