/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_bintohex.c                 ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/01  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/13  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_bintohex.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	main()
{
	char	*bin_one		= "00000000000000000000000000000000";
	char	*bin_two		= "00000000000000000000000000000000";
	char	*bin_neg_one	= "11111111111111111111111111111111";
	char	*bin_neg_two	= "11111111111111111111111111111111";
	char	*result			= NULL;
	result					= (char *)malloc(9 * sizeof(char));
	if(!result)
	{
		return(-1);
	} 
	result	= ft_bintohex(bin_one);
	printf("\033[1;33m%s\033[0;0m\n", result);
	result = NULL;
	result = ft_bintohex(bin_two);
	printf("\033[1;33m%s\033[0;0m\n", result);
	result = NULL;
	result = ft_bintohex(bin_neg_one);
	printf("\033[1;33m%s\033[0;0m\n", result);
	result = NULL;
	result = ft_bintohex(bin_neg_two);
	printf("\033[1;33m%s\033[0;0m\n", result);
	result = NULL;

		free(result);
}