#include "libft.h"

void	ft_bin_revers(char	*octet)
{
	if(!octet)
		return;

	int	i		= 0;
	int	flag	= 1;

	while(octet[i] != '\0')
	{
		if(octet[i] == '0')
			octet[i] = '1';
		else if(octet[i] == '1')
			octet[i] = '0';
		i++;
	}

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
}