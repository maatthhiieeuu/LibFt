#include "libft.h"

int	ft_bintoi(char *bin, char sign)
{
	if(!bin)
		return(-1);

	int		result	= 0;
	char	*temp	= (char *)malloc(9 * sizeof(char));
	if(!temp)
		return(-1);

	ft_memset(temp, '\0', 8);

	temp	= ft_bintohex(bin);
	result	= ft_hextoi(temp, sign);

	free(temp);

	return(result);
}
