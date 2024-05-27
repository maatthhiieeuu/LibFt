/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_toupper.c                  ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/27  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/27  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int character);

int	main()
{
	char	result_maj;
	char	ascii = '\0';
	int		i = 0;
	char 	alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
	 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	  


	while(i < 25)
	{
		if(i < 10)
		{
			printf(" ");
		}
		printf("alphabet[%d] = |\033[1;33m%c|\n\033[1;0m", i, alphabet[i]);
		result_maj = ft_toupper(alphabet[i]);
		if(i < 10)
		{
			printf(" ");
		}
		printf("alphabet[%d] = |\033[1;34m%c|\n\033[1;0m", i, result_maj);
		i++;
	}
	printf("\n\n\n");
	i = 0;
	result_maj = 0;

	while(i < 127)
	{
		if(i < 10)
		{
			printf(" ");
		}
		printf("ascii[%d] = |\033[1;33m%c|\n\033[1;0m", i, ascii);
		result_maj = ft_toupper(ascii);
		if(i < 10)
		{
			printf(" ");
		}
		printf("ascii[%d] = |\033[1;34m%c|\n\033[1;0m", i, result_maj);
		i++;
		ascii++;
	}
	return(0);
}