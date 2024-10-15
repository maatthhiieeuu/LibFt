#include "ft_ItoI.h"

char	*ft_itobin(int n, char sign)
{

	int		quotient	= 0;
	int		dividend	= n;
	int		i			= 31;
	char	c			= 'X';

	char	*octet		= (char *)malloc(33 * sizeof(char));
	if(!octet)
	{
		perror(RED"\n\nInit octet echec.\n\n");
		return(NULL);
	}

	ft_memset(octet, 'X', 32);
	octet[32] = '\0';

	//printf("\n\n"PURPLE"1. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

	if(n == INT_MIN || n == INT_MAX)
	{
		limits_managed(octet, n);

		return(octet);
	}

	//printf("\n\n"PURPLE"2. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);
	if(n < 0)
	{
		sign = '-';
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

	//printf("\n\n"PURPLE"3. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

	if(sign == '-')
	{

		//printf("\n\n"PURPLE"4. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

		one_complement(octet);

		//printf("\n\n"PURPLE"7. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);


	}
	//printf("\n\n"PURPLE"8. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

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

	//printf("\n\n"PURPLE"5. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

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

	//printf("\n\n"PURPLE"6. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);
}
 
char	*limits_managed(char *octet, int n)
{
	if(n == INT_MIN)
		ft_memcpy(octet, "10000000000000000000000000000000", 33);
	else if(n == INT_MAX)
		ft_memcpy(octet, "01111111111111111111111111111111", 33);

	return(octet);
}