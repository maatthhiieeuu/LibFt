/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : Libft/main-ft_isalpha.c                  ::::::  ::::::    ::::::::::             */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/10   by m.boegler            ###         ###   ###########                 */
/*   Updated: 2024/05/13   by m.boegler           ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <ctype.h>

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
	int or = 0;
	int ft = 0;

	ft = ft_isalpha(a);
	or = isalpha(a);
	if(ft_isalpha(a) == isalpha(a))
		printf("\033[1;32ma OK\033[0m\n");
	else 
		printf("\033[1;31ma XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(b);
	or = isalpha(b);
	if(ft_isalpha(b) == isalpha(b))
		printf("\033[1;32mb OK\033[0m\n");
	else 
		printf("\033[1;31mb XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(x);
	or = isalpha(x);
	if(ft_isalpha(x) == isalpha(x))
		printf("\033[1;32mx OK\033[0m\n");
	else 
		printf("\033[1;31mx XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(z);
	or = isalpha(z);
	if(ft_isalpha(z) == isalpha(z))
		printf("\033[1;32mz OK\033[0m\n\n");
	else 
		printf("\033[1;31mz XX\033[0m\n\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(A);
	or = isalpha(A);
	if(ft_isalpha(A) == isalpha(A))
		printf("\033[1;32mA OK\033[0m\n");
	else 
		printf("\033[1;31mA XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(B);
	or = isalpha(B);
	if(ft_isalpha(B) == isalpha(B))
		printf("\033[1;32mB OK\033[0m\n");
	else 
		printf("\033[1;31mB XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(X);
	or = isalpha(X);
	if(ft_isalpha(X) == isalpha(X))
		printf("\033[1;32mX OK\033[0m\n\n");
	else 
		printf("\033[1;31mX XX\033[0m\n\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(Z);
	or = isalpha(Z);
	if(ft_isalpha(Z) == isalpha(Z))
		printf("\033[1;32mZ OK\033[0m\n");
	else 
		printf("\033[1;31mZ XX\033[0m\n");	
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(number);
	or = isalpha(number);
	if(ft_isalpha(number) == isalpha(number))
		printf("\033[1;32mnumber OK\033[0m\n");
	else 
		printf("\033[1;31mnumber XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(space);
	or = isdigit(space);
	if(ft_isalpha(space) == isalpha(space))
		printf("\033[1;32mspace OK\033[0m\n");
	else 
		printf("\033[1;31mspace XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isalpha(zero);
	or = isalpha(zero);
	if(ft_isalpha(zero) == isalpha(zero))
		printf("\033[1;32mzero OK\033[0m\n");
	else 
		printf("\033[1;31mzero XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);
}