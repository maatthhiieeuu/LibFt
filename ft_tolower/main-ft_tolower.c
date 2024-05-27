/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_tolower.c                  ::::::  :::::::   :::::::::::            */
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

int ft_tolower(int character);

int	main()
{
	char	result_ft = 0;
	char	result_or = 0;
	char	ascii = '\0';
	int		i = 0;

	while(i < 127)
	{
		if(i < 10)
		{
			printf(" ");
		}
		printf("ascii[%d] = |\033[1;33m%c| :\n\033[1;0m", i, ascii);
		result_ft = ft_tolower(ascii);
		result_or = tolower(ascii);
		printf("tolower    [%c] = |\033[1;34m%c|\n\033[1;0m", ascii, result_ft);
		printf("ft_tolower [%c] = |\033[1;34m%c|\n\n\033[1;0m", ascii, result_or);
		i++;
		ascii++;
	}
	return(0);
}