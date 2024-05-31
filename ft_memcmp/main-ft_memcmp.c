/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_memcmp.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/31  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/31  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	char *dest = (char *)destination;
	char *src = (char *)source;
	size_t i = 0;

	while(i < size)
	{
		dest[i] = src[i];
		i += 1;
	}
	return (destination);
}

int	main()
{
	char	*ptr1 = (char *)calloc(16, sizeof(char));
	char	*ptr2 = (char *)calloc(16, sizeof(char));
	int 	result_or = 999;
	int 	result_ft = 999;
	if(!ptr1 || !ptr2)
	{
		printf("\nAu secours pointeur dans le main : null !\n");
		return(0);
	}
	ft_memcpy(ptr1, "La souris verte", 16);
	ft_memcpy(ptr2, "la souris verte", 16);
	result_or = memcmp(ptr1, ptr2, 16);
	result_ft = ft_memcmp(ptr1, ptr2, 16);
	if(result_or == result_ft)
	{
		printf("\033[1;32m\nSuccess\n\033[1;0m");	
		printf("\033[1;3mresult_or = %d\nresult_ft = %d\n\033[1;0m", result_or, result_ft);	
	}else
	{
		printf("\033[1;31m\nFailed\n\033[1;0m");
		printf("\033[1;3mresult_or = %d\nresult_ft = %d\n\033[1;0m", result_or, result_ft);	
		}
		return(0);
}
//	printf("\033[1;3m\n\n\033[1;0m");