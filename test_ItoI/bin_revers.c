#include "ft_ItoI.h"

void	bin_revers(char	*octet)
{

	//printf(BLUE"\n\n---------------------- Début de la fonction bin_revers ----------------------");

	if(!octet)
		return;

	int	i		= 0;
	int	flag	= 1;

	//printf("\n\n"PURPLE"1. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

	while(octet[i] != '\0')
	{
		if(octet[i] == '0')
			octet[i] = '1';
		else if(octet[i] == '1')
			octet[i] = '0';
		i++;
	}

	//printf("\n\n"PURPLE"2. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);

	i = 31;

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

	//printf("\n\n"PURPLE"3. Valeur de "ORANGE"octet"PURPLE" = "GREEN"%s\n"ORANGE, octet);


	//printf(BLUE"\n\n---------------------- Fin de la fonction bin_revers ----------------------");
}
