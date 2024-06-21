/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strmapi.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/21  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/21  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if(!s || !f)
		return(NULL);

	char	*result	= NULL;
	size_t	len		= 0;
	size_t	i		= 0;

	len = ft_strlen(s);
	if(len == 0)
		return(NULL);

	result = (char *)malloc((len + 1) * sizeof(char));
	if(!result)
		return(NULL);

	while(s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';

	return(result);
}

/*

Function name:					ft_strmapi

Prototype:						char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Paramètres:						s: La chaîne de caractères sur laquelle itérer.
								f: La fonction à appliquer à chaque caractère.

Valeur de retour:				La chaîne de caractères résultant des applications
								successives de ’f’.
								Retourne NULL si l’allocation échoue.

Fonctions externes autorisées:	malloc

Description:					Applique la fonction ’f’ à chaque caractère de la
								chaîne de caractères passée en argument pour créer
								une nouvelle chaîne de caractères (avec malloc(3))
								résultant des applications successives de ’f’.

*/