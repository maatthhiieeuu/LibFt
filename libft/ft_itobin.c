/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_itobin.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/08/01  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*limits_managed(char *octet, int n);
void	two_complement(char *octet);
void	one_complement(char *octet);

char	*ft_itobin(int n)
{
	int		sign		= 0;
	int		quotient	= 0;
	int		dividend	= n;
	int		rest		= 0;
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