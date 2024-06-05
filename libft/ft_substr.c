/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_substr.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/05  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char *ft_substr(const char *source, size_t start, size_t length)
{
	size_t	i = 0;
	char	*ptr = NULL;

	ptr = (char	*)malloc((length + 1) * sizeof(char));
	if(!ptr || !source)
		return(NULL);
	size_t	len_source = ft_strlen(source);
	if(start > len_source - length)
	{
		ptr[i] = '\0';
		return(ptr);
	}
	
	while(source[start + i] != '\0' && i < length)
	{
		ptr[i] = source[start + i];
		i += 1;
	}
	ptr[i] = '\0';
	return(ptr);
}
