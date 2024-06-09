/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strjoin.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/06  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/06  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if(!s1 || !s2)
		return(NULL);

	char	*result = NULL;
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(!result)
		return(NULL);

	size_t	i = 0;
	size_t	j = 0;

	while(s1[i] != '\0')
	{
		result[i] = s1[i];
		i += 1;
	}
	while(s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j += 1;
	}
	result[i + j] = '\0';
	
	return(result);
}

/*

Function name:		ft_strjoin
Prototype:			char *ft_strjoin(char const *s1, char const *s2);
Paramètres:			s1: La chaîne de caractères préfixe.
					s2: La chaîne de caractères suffixe.
Valeur de retour: 	La nouvelle chaîne de caractères.
					NULL si l’allocation échoue.
Fonctions externes	
autorisées:			malloc
Description:		Alloue (avec malloc(3)) et retourne une nouvelle
					chaîne, résultat de la concaténation de s1 et s2.

*/