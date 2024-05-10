/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : Libft/main-ft_isalpha.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/10   by m.boegler            ###         ###   ###########                 */
/*   Updated: 2024/05/10   by m.boegler           ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>

int ft_isalpha(int character);

int main()
{
	char a = 'a';
	char b = 'b';
	char x = 'x';
	char z = 'z';
	char A = 'A';
	char B = 'B';
	char X = 'X';
	char Z = 'Z';
	int number = 33;
	char space = ' ';
	char zero = '0';

	if(ft_isalpha(a))
		printf("a OK\n");
	else 
		printf("a XX\n");
	if(ft_isalpha(b))
		printf("b OK\n");
	else 
		printf("b XX\n");
	if(ft_isalpha(x))
		printf("x OK\n");
	else 
		printf("x XX\n");
	if(ft_isalpha(z))
		printf("z OK\n\n");
	else 
		printf("z XX\n\n");	
	if(ft_isalpha(A))
		printf("A OK\n");
	else 
		printf("A XX\n");
	if(ft_isalpha(B))
		printf("B OK\n");
	else 
		printf("B XX\n");
	if(ft_isalpha(X))
		printf("X OK\n");
	else 
		printf("X XX\n");
	if(ft_isalpha(Z))
		printf("Z OK\n\n");
	else 
		printf("Z XX\n\n");	
	if(ft_isalpha(number))
		printf("number OK (\"%d\")\n", number);
	else 
		printf("number XX\n");
	if(ft_isalpha(space))
		printf("space OK (\"%d\")\n", space);
	else 
		printf("space XX\n");
	if(ft_isalpha(zero))
		printf("zero OK (\"%d\")\n", zero);
	else 
		printf("zero XX\n");
}