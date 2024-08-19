/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : ft_libft/main-ft_bintoi.c                ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/19  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/19  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include "ft_bintoi.h"

int	main()
{
	printf("INT_MAX = %d\n", UINT_MAX);
	int		i 			= -1;
	ssize_t		i_result	= 0;
	char	*bin_result	= (char *)malloc(33 * sizeof(char));//4294967295
	if(!bin_result)
	{
		perror(RED"\nError bin_result allocation\n"BC);
		return(-1);
	}
	char	*hex_result	= (char *)malloc(9 * sizeof(char));
	if(!hex_result)
	{
		perror(RED"\nError hex_result allocation\n"BC);
		return(-1);
	}

	printf("\n\n\n"PURPLE"Valeur de "ORANGE"i"PURPLE" = "GREEN"%d"PURPLE"\n\nConversion de i vers bin\n"BC, i);

	bin_result	= ft_itobin(i);


	printf("\n\n\n"PURPLE"Valeur de "ORANGE"bin"PURPLE" = "GREEN"%s"PURPLE"\n\nConversion de bin vers hex\n"BC, bin_result);

	hex_result		= ft_bintohex(bin_result);


	printf("\n\n\n"PURPLE"Valeur de "ORANGE"hex"PURPLE" = "RED"%s"PURPLE"\n\nConversion de hex vers i\n"BC, hex_result);

	i_result	= ft_hextoi(hex_result); 


	printf("\n\n\n"PURPLE"Valeur de "ORANGE"i_result"PURPLE"                   = "RED"%ld"PURPLE"\n\nComparaison avec la valeur initial i = "ORANGE"%d"BC"\n\n\n", i_result, i);
	
	

	free(bin_result);
	free(hex_result);


}
char	*ft_itobin(int n)
{
	int		sign		= 0;
	int		quotient	= 0;
	int		dividend	= n;
	int		i			= 31;
	char	c			= 'X';
	char	*octet		= (char *)malloc(33 * sizeof(char));
	if(!octet)
	{
		perror("init octet echec");
		return(NULL);
	}

	ft_memset(octet, '0', 32);
	octet[32] = '\0';

	if(n == INT_MIN || n == INT_MAX)
	{
		limits_managed(octet, n);
		return(octet);
	}

	if(n < 0)
	{
		sign = 1;
		dividend *= -1;
	}

	while(i >= 0)
	{
		quotient = dividend / 2;
		c = (dividend - (quotient * 2)) + 48; 
		octet[i] = c;
		dividend = quotient;
		i--;
	}

	if(sign == 1)
		one_complement(octet);

	return(octet);
}

void	one_complement(char *octet)
{
	if(!octet)
		return;

	int i = 0;

	while(octet[i] != '\0')
	{
		if(octet[i] == '0')
			octet[i] = '1';
		else if(octet[i] == '1')
			octet[i] = '0';
		i++;
	}

	two_complement(octet);
}

void	two_complement(char *octet)
{
	if(!octet)
		return;

	int i = 31;
	int flag = 1;

	while(i >= 0)
	{
		if(octet[i] == '1' && flag == 1)
		{
			octet[i] = '0';
		}
		else if(octet[i] == '0' && flag == 1)
		{
			octet[i] = '1';
			flag = 0;
		}
		i--;
	}
}

char	*limits_managed(char *octet, int n)
{
	if(n == INT_MIN)
		ft_memcpy(octet, "10000000000000000000000000000000", 33);
	else if(n == INT_MAX)
		ft_memcpy(octet, "01111111111111111111111111111111", 33);

	return(octet);
}
void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	if(!destination || !source || size == 0)
		return(NULL);

	char	*dest	= (char *)destination;
	char	*src	= (char *)source;
	size_t	i		= 0;

	while(i < size)
	{
		dest[i] = src[i];
		i += 1;
	}

	return (destination);
}