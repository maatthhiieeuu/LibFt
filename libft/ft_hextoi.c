#include "libft.h"

ssize_t	ft_hextoi(char	*hex, char sign)
{
	if(!hex)
		return(-1);

	size_t			factor			= ft_strlen(hex) - 1;
	ssize_t			result			= 0;
	ssize_t			factor_result	= 0;
	int				i				= 0;

	if(sign == '-')
		hex = ft_hex_neg_to_hex_pos(hex, sign);

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
				perror(RED"\n\nLettre non comprise entre A-F.\n\n"BC);
				printf(PURPLE"\n\nValeur de hex["ORANGE"%d"PURPLE"] = "ORANGE"%c\n\n"PURPLE"Valeur de hex = "ORANGE"%s\n\n"BC, i, hex[i], hex);
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
				perror(RED"\nLettre non comprise entre 0-9.\n"BC);
				return(-1);
			}
		}
		else
		{
			perror(RED"\nLettre non comprise entre 0-F.\n"BC);
			return(-1);
		}

		i++;
		factor--;
	}
	
	if(sign == '-')
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

