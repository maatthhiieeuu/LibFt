/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strnstr.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/01  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if(!big)
		return(NULL);
	else if(!little || *little == '\0')
		return((char *)big);

	size_t	i			= 0;
	size_t	j			= 0;
	size_t	little_len	= ft_strlen(little);

	if(len < little_len)
		return(NULL);

	while(big[i] != '\0' && little[j] != '\0' && i <= len - little_len)
	{
		if(big[i] == little[j])
		{
			while(big[i + j] == little[j] && j <= little_len)
			{
				j += 1;
			}

			if(j >= little_len)
				return((char *)big + i);
		}

		j = 0;
		i += 1;
	}
	
	return(NULL);

}

/*

Description de la fonction

char *strnstr(const char *big, const char *little, size_t len);

La fonction strnstr recherche la première occurrence de la chaîne little dans les len premiers 
caractères de la chaîne big. La comparaison est sensible à la casse et s'arrête dès qu'une 
correspondance est trouvée ou que les len caractères ont été examinés.

Paramètres

    const char *big: La chaîne de caractères dans laquelle la recherche est effectuée.
        Explication: C'est la chaîne de caractères principale dans laquelle vous voulez 
        rechercher la sous-chaîne little. Elle peut être plus longue que len caractères, 
        mais seulement les len premiers caractères seront examinés.

    const char *little: La chaîne de caractères à rechercher dans big.
        Explication: C'est la sous-chaîne que vous cherchez à trouver dans big. Si little 
        est une chaîne vide, la fonction retourne big.

    size_t len: Le nombre maximal de caractères de big à examiner.
        Explication: Ce paramètre limite la portée de la recherche à len caractères dans 
        big. Si big est plus courte que len, la recherche se fera uniquement sur la longueur 
        de big.

Valeur de retour

    Pointeur vers la première occurrence de little dans big: Si little est trouvée dans les 
    len premiers caractères de big, la fonction retourne un pointeur vers le début de cette 
    occurrence dans big.
    NULL: Si little n'est pas trouvée dans les len premiers caractères de big, ou si big ou 
    little sont des chaînes vides, la fonction retourne NULL.

*/