/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_isdigit                    ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/11  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/11  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int character);

int main()
{
	char escape = ' ';
	char exclamation = '!';
	char plus = '+';
	char slash = '/';
	char zero = '0';
	char cinque = '5';
	char neuf = '9';
	char doublePoint = ':';
	int A = 'A';
	char M = ' ';
	char wave = '~';
	int ft = 0;
	int or = 0;

	ft = ft_isdigit(escape);
	or = isdigit(escape);
	if(ft_isdigit(escape) == isdigit(escape))
		printf("\033[1;32mescape OK\033[0m\n");
	else 
		printf("\033[1;31mescape XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(exclamation);
	or = isdigit(exclamation);
	if(ft_isdigit(exclamation) == isdigit(exclamation))
		printf("\033[1;32mexclamation OK\033[0m\n");
	else 
		printf("\033[1;31mexclamation XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(plus);
	or = isdigit(plus);
	if(ft_isdigit(plus) == isdigit(plus))
		printf("\033[1;32mplus OK\033[0m\n");
	else 
		printf("\033[1;31mplus XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(slash);
	or = isdigit(slash);
	if(ft_isdigit(slash) == isdigit(slash))
		printf("\033[1;32mslash OK\033[0m\n\n");
	else 
		printf("\033[1;31mslash XX\033[0m\n\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(zero);
	or = isdigit(zero);
	if(ft_isdigit(zero) == isdigit(zero))
		printf("\033[1;32mzero OK\033[0m\n");
	else 
		printf("\033[1;31mzero XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(cinque);
	or = isdigit(cinque);
	if(ft_isdigit(cinque) == isdigit(cinque))
		printf("\033[1;32mcinque OK\033[0m\n");
	else 
		printf("\033[1;31mcinque XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(neuf);
	or = isdigit(neuf);
	if(ft_isdigit(neuf) == isdigit(neuf))
		printf("\033[1;32mneuf OK\033[0m\n\n");
	else 
		printf("\033[1;31mneuf XX\033[0m\n\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(doublePoint);
	or = isdigit(doublePoint);
	if(ft_isdigit(doublePoint) == isdigit(doublePoint))
		printf("\033[1;32mdoublePoint OK\033[0m\n");
	else 
		printf("\033[1;31mdoublePoint XX\033[0m\n");	
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(A);
	or = isdigit(A);
	if(ft_isdigit(A) == isdigit(A))
		printf("\033[1;32mA OK\033[0m\n");
	else 
		printf("\033[1;31mA XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(M);
	or = isdigit(M);
	if(ft_isdigit(M) == isdigit(M))
		printf("\033[1;32mM OK\033[0m\n");
	else 
		printf("\033[1;31mM XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);

	ft = ft_isdigit(wave);
	or = isdigit(wave);
	if(ft_isdigit(wave) == isdigit(wave))
		printf("\033[1;32mwave OK\033[0m\n");
	else 
		printf("\033[1;31mwave XX\033[0m\n");
	printf("or = |%d|\nft = |%d|.\n\n", or, ft);
}