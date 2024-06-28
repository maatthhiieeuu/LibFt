/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_substr.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/05  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stdlib.h>
//#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i		= 0;
	char	*ptr	= NULL;
	ptr 			= (char	*)malloc((len + 1) * sizeof(char));
	if(!ptr || !s)
		return(NULL);

	size_t	len_source = ft_strlen(s);

	if(start > len_source - len)
	{
		ptr[i] = '\0';
		return(ptr);
	}
	
	while(s[start + i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i += 1;
	}

	ptr[i] = '\0';


	return(ptr);
}
