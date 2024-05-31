/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_memchr.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/31  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/31  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *memory_block, int searched_char, size_t size);

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
	char	*memory_bloc1 = (char *)calloc(12, sizeof(char));
	ft_memcpy(memory_bloc1, "La fourmis.", 12);
	memcpy(memory_bloc1, "La fourmis.", 12);
	char	tst1 = 'i';
	char	*or_result1 = memchr(memory_bloc1, tst1, 12);
	char	*ft_result1 = ft_memchr(memory_bloc1, tst1, 12);
	if(or_result1 == ft_result1)
	{
		printf("\n\033[1;32mSuccess: 1 !\n\033[1;0mor 1 = %p\nft 1 = %p", or_result1, ft_result1);
	}
	else
		printf("\n\033[1;31mFailed: 1 !\n\033[1;0mor 1 = %p\nft 1 = %p\n", or_result1, ft_result1);
	free(memory_bloc1);

	char	*memory_bloc2 = (char *)calloc(12, sizeof(char));
	ft_memcpy(memory_bloc2, "La fourmis.", 12);
	memcpy(memory_bloc2, "La fourmis.", 12);
	char	tst2 = 'L';
	char	*or_result2 = memchr(memory_bloc2, tst2, 12);
	char	*ft_result2 = ft_memchr(memory_bloc2, tst2, 12);
	if(or_result2 == ft_result2)
	{
		printf("\n\033[1;32mSuccess: 2 !\n\033[1;0m");
	}
	else
		printf("\n\033[1;31mFailed: 2 !\n\033[1;0m");
	free(memory_bloc2);

	char	*memory_bloc3 = (char *)calloc(12, sizeof(char));
	ft_memcpy(memory_bloc3, "La fourmis.", 12);
	memcpy(memory_bloc3, "La fourmis.", 12);
	char	tst3 = 's';
	char	*or_result3 = memchr(memory_bloc3, tst3, 12);
	char	*ft_result3 = ft_memchr(memory_bloc3, tst3, 12);
	if(or_result3 == ft_result3)
	{
		printf("\n\033[1;32mSuccess: 3 !\n\033[1;0m");
	}
	else
		printf("\n\033[1;31mFailed: 3 !\n\033[1;0m");
	free(memory_bloc3);

	char	*memory_bloc4 = (char *)calloc(12, sizeof(char));
	ft_memcpy(memory_bloc4, "La fourmis.", 12);
	memcpy(memory_bloc4, "La fourmis.", 12);
	char	tst4 = 'a';
	char	*or_result4 = memchr(memory_bloc4, tst4, 12);
	char	*ft_result4 = ft_memchr(memory_bloc4, tst4, 12);
	if(or_result4 == ft_result4)
	{
		printf("\n\033[1;32mSuccess: 4 !\n\033[1;0m");
	}
	else
		printf("\n\033[1;31mFailed: 4 !\n\033[1;0m");
	free(memory_bloc4);

	char	*memory_bloc5 = (char *)calloc(12, sizeof(char));
	char	tst5 = 'a';
	char	*or_result5 = memchr(memory_bloc5, tst5, 12);
	char	*ft_result5 = ft_memchr(memory_bloc5, tst5, 12);
	if(or_result5 == ft_result5)
	{
		printf("\n\033[1;32mSuccess: 5 !\n\033[1;0m");
	}
	else
		printf("\n\033[1;31mFailed: 5 !\n\033[1;0m");
	free(memory_bloc5);

	char	*memory_bloc6 = (char *)malloc(12 * sizeof(char));
	ft_memcpy(memory_bloc6, "La fourmis", 11);
	memcpy(memory_bloc6, "La fourmis", 11);
	char	tst6 = 'a';
	char	*or_result6 = memchr(memory_bloc6, tst6, 12);
	char	*ft_result6 = ft_memchr(memory_bloc6, tst6, 12);
	if(or_result6 == ft_result6)
	{
		printf("\n\033[1;32mSuccess: 6 !\n\033[1;0m");
	}
	else
		printf("\n\033[1;31mFailed: 6 !\n\033[1;0m");
	free(memory_bloc6);

}