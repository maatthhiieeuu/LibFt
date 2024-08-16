/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : ft_libft/ft_hextoi.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/07  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/16  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

#define RD "\033[1;31m"
#define BC "\033[0;0m"

size_t	factorization(size_t factor);

int	ft_hextoi(char	*hex)
{
	if(!hex)
		return(-1);

	size_t			factor			= ft_strlen(hex) - 1;
	ssize_t			result			= 0;
	ssize_t			factor_result	= 0;
	int				i				= 0;
	
	while(hex[i] != '\0')
	{
		if(ft_isalpha(hex[i]) != 0)
		{
			if(hex[i] == 'a' || hex[i] == 'A')
			{
				factor_result = factorization(factor);
				result += 10 * factor_result;
			}
			else if(hex[i] == 'b' || hex[i] == 'B')
			{
				factor_result = factorization(factor);
				result += 11 * factor_result;
			}
			else if(hex[i] == 'c' || hex[i] == 'C')
			{
				factor_result = factorization(factor);
				result += 12 * factor_result;
			}
			else if(hex[i] == 'd' || hex[i] == 'D')
			{
				factor_result = factorization(factor);
				result += 13 * factor_result;
			}
			else if(hex[i] == 'e' || hex[i] == 'E')
			{
				factor_result = factorization(factor);
				result += 14 * factor_result;
			}
			else if(hex[i] == 'f' || hex[i] == 'F')
			{
				factor_result = factorization(factor);
				result += 15 * factor_result;
			}
			else
			{
				perror(RD"\nLettre non comprise entre A-F.\n"BC);
				return(-1);
			}
		}
		else if(ft_isdigit(hex[i]) != 0)
		{
			if(hex[i] >= '0' && hex[i] <= '9')
			{
				factor_result = factorization(factor);
				result += (hex[i] - 48) * factor_result;
			}
			else
			{
				perror(RD"\nLettre non comprise entre 0-9.\n"BC);
				return(-1);
			}
		}
		else
		{
			perror(RD"\nLettre non comprise entre 0-F.\n"BC);
			return(-1);
		}

		i++;
		factor--;
	}

	if(hex[0] >= '8')
		result *= -1;

	return(result);
}

size_t	factorization(size_t factor)
{
	size_t	result	= 16;
	int	c_factor	= (int)factor;

	if(factor == 0)
		return(1);

	while(c_factor != 1)
	{
		result *= 16;
		c_factor--;
	}
	
	return(result);
}