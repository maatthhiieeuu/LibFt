/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_memcmp.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/31  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	if(!pointer1 || !pointer2)
		return(0);

	char	*ptr1 = (char *)pointer1;
	char	*ptr2 = (char *)pointer2;
	size_t	i = 0;

	while(i < size)
	{
		if(ptr1[i] != ptr2[i])
			return(ptr1[i] - ptr2[i]);
		i += 1;
	}

	return(ptr1[i] - ptr2[i]);
}

/*

Entête à inclure

#include <string.h>  // <cstring> en C++

Fonction memcmp

int memcmp( const void * pointer1, const void * pointer2, size_t size );

Cette fonction permet de comparer le contenu de deux blocs de mémoire spécifiés par les deux 
premiers paramètres de la fonction. Le troisième paramètre, size, permet de spécifier le nombre 
d'octets sur lequel comparer les deux blocs. Les octets des deux blocs sont comparés deux à deux. 
Tant que les deux octets comparés sont égaux, la fonction passe aux deux suivants. Si les deux 
octets comparés sont différents, alors la fonction renvérra lequel des deux blocs est le plus 
petit en termes de contenu.

Attention, contrairement à strcpy, aucun test sur une éventuelle valeur nulle n'est réalisé 
pour stopper la comparaison. Seule la taille du bloc sera considérée.
Paramètres

    pointer1 : permet de spécifier l'adresse du premier bloc mémoire à comparer.
    pointer2 : permet de spécifier l'adresse du second bloc mémoire à comparer.
    size : indique le nombre d'octets maximal à comparer.

Valeur de retour

Trois cas sont possibles en termes de valeur de retour. Soit la valeur de retour est 
négative : dans ce cas, le premier octet qui différe entre les deux blocs est plus petit 
dans le premier bloc. Soit la valeur de retour est nulle : dans ce cas, les deux blocs 
ont leurs contenus strictement identique. Enfin, si la valeur de retour est positive : dans 
ce cas, le premier octet qui différe entre les deux blocs est plus grand dans le premier bloc. 

*/