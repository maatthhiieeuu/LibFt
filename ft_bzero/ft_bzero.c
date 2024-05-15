/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_bzero.c                         ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/15  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/15  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char *memoryBloc = (unsigned char *)pointer;
	unsigned char character = (unsigned char)value;
	size_t	i = 0;
	
	while(i < count)
	{
		*memoryBloc = character;
		memoryBloc++;
		i += 1;
	}
	return (pointer);
}

void	bzero(void *pointer, size_t n)
{
	ft_memset(pointer, '0', n);
}

/*

bzero - Écrire des octets de valeur zéro dans un bloc d'octets  

*/