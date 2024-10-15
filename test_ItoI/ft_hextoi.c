#include "ft_ItoI.h"

void	two_complements(char *octet);

ssize_t	ft_hextoi(char	*hex, char sign)
{
	//printf(BLUE"\n\n---------------------- Début de la fonction ft_hextoi ----------------------");

	if(!hex)
		return(-1);

	size_t			factor			= ft_strlen(hex) - 1;
	ssize_t			result			= 0;
	ssize_t			factor_result	= 0;
	int				i				= 0;


	//printf(PURPLE"\nValeur de "ORANGE"hex"PURPLE" = "GREEN"%s\n", hex);

	if(sign == '-')
		hex = ft_hex_neg_to_hex_pos(hex, sign);


	//printf(PURPLE"\n1. Valeur de "ORANGE"hex"PURPLE" = "GREEN"%s\n", hex);

	while(hex[i] != '\0')
	{
		//printf(BLUE"\nresult = %ld i = %d\n"BC, result, i);

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
				//printf(GREEN"result = %ld + 15 x 16^%ld = ", result, factor);
				factor_result = factorization(factor);
				//printf("\n                        result = %ld + 15 x %ld = ", result, factor_result);
				result += 15 * factor_result;
				//printf("\n                        result = %ld"BC, result);
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
	
	//printf(PURPLE"\nValeur de "ORANGE"result"PURPLE" = "GREEN"%ld\n", result);// Içi la valeur est fausse car le binaire n'est pas décomplémentariser à deux, réparation nécessaire sur fonction ft_hextobin.

	if(sign == '-')
		result *= -1;

	//printf(PURPLE"\nValeur de "ORANGE"result"PURPLE" = "GREEN"%ld\n", result);// Içi la valeur est fausse car le binaire n'est pas décomplémentariser à deux, réparation nécessaire sur fonction ft_hextobin.

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
		//printf(BC"16^%d = \n                   %zu x 16 = ",c_factor, result);
		result *= 16;
		c_factor--;
	}
	//printf("%zu\n"GREEN, result);
	return(result);
}

