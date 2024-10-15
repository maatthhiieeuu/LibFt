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
	printf(ORANGE"\n\n\n---------------------- INITIALISATION ----------------------"BC);

	//printf("\n"PURPLE"Valeur de "ORANGE"UINT_MAX"PURPLE" = "GREEN"%u", UINT_MAX);
	int			i_test 		= -1;
	char*		bin_real	= "11111111111111111111111111111111";
	char*		hex_real	= "ffffffff";
	ssize_t		i_result	= 0;
	char		sign		= '+';
	char		*bin_result	= (char *)malloc(33 * sizeof(char));//4294967295
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
	if(i_test < 0)
		{
			sign = '-';
		}

	printf("\n\n"PURPLE"Valeur de "ORANGE"i_test"PURPLE" = "GREEN"%d\n"ORANGE, i_test);


	printf("\n\n---------------------- "PURPLE"CONVERSION DE "ORANGE"i"PURPLE" VERS "ORANGE"bin ----------------------\n\n"BC);

	bin_result	= ft_itobin(i_test, sign);

	printf(""PURPLE"Valeur de "ORANGE"bin_result"PURPLE" = "GREEN"%s"PURPLE"\n", bin_result);
	printf(""PURPLE"Valeur de "ORANGE"bin_real"PURPLE"   = "GREEN"%s"PURPLE"\n\n", bin_real);


	printf(ORANGE"\n---------------------- "PURPLE"CONVERSION DE "ORANGE"bin"PURPLE" VERS "ORANGE"hex ----------------------\n\n"BC);	

	hex_result		= ft_bintohex(bin_result, sign);

	printf(""PURPLE"Valeur de "ORANGE"hex_result"PURPLE" = "GREEN"%s"PURPLE"\n", hex_result);
	printf(""PURPLE"Valeur de "ORANGE"hex_real"PURPLE"   = "GREEN"%s"PURPLE"\n\n", hex_real);


	printf(ORANGE"\n---------------------- "PURPLE"CONVERSION DE "ORANGE"hex"PURPLE" VERS "ORANGE"i ----------------------\n\n"BC);

	i_result	= ft_hextoi(hex_result, sign); 

	printf(""PURPLE"Valeur de "ORANGE"i_result"PURPLE" = "GREEN"%ld"PURPLE"\n", i_result);
	printf(""PURPLE"Valeur de "ORANGE"i_test"PURPLE"   = "GREEN"%d"PURPLE"\n\n", i_test);	
	

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