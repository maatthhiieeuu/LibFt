#include <stdio.h>
#include "ft_itobin.h"
#include <limits.h>
#include <stdlib.h>

int main()
{
	int	i	= 0;
	int	decimaln	= -2;
	int	decimal	= INT_MAX;
	char	*binary = (char *)malloc(33 * sizeof(char));
	if(!binary)
	{
		perror("Allocation failed binary");
		return(404);
	}
	while(decimal > INT_MIN)
	{
		binary = ft_itobin(decimal);
		printf("%s		%d\n", binary, decimal);
		decimal--;
		i++;
		if(i == 72)
		{
			getchar();
			i = 0;
		}
	}
	free(binary);
	return(0);
}