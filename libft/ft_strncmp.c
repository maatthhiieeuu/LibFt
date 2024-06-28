/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strncmp.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/30  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h>
//#include <stdio.h>
//#include <errno.h>

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	if(!first || !second)
		perror("Error fonction strncmp");

	size_t	i	= 0;

	while(first[i] != 0 && second[i] != 0 && i < length)
	{
		if(first[i] != second[i])
			return(first[i] - second[i]);
		
		i += 1;
	}

	return(first[i] - second[i]);
}

/*

Entête à inclure

#include <string.h>  // <cstring> en C++

Fonction strncmp

int strncmp( const char * first, const char * second, size_t length );

Cette fonction permet de comparer deux chaînes de caractères et de savoir si la première est 
inférieure, égale ou supérieure à la seconde. Cette comparaison sera faite dans l'ordre 
lexicographique (et donc, en tenant compte des valeurs ASCII des différents caractères comparés). 
Néanmoins la comparaison se fera au maximum sur les length premiers caractères.

En langage C, les chaînes de caractères sont qualifiées d'AZT : A Zéro Terminal. Cela signifie 
qu'une chaîne de caractères se termine forcément par un code ASCII nul (pouvant aussi être 
représenté par '\0').
Paramètres

    first : la première chaîne de caractères à comparer.
    second : la seconde chaîne de caractères à comparer.
    length : le nombre maximal (un entier non signé) de caractères à comparer.

Valeur de retour

Trois cas distincts doivent être considérés. Soit les deux chaînes sont égales : dans ce cas, 
une valeur nulle sera retournée. Soit la première chaîne est plus petite que la seconde (dans 
l'ordre lexicographique) : dans ce cas, une valeur négative sera retournée. Soit la première 
chaîne est plus grande que la seconde : dans ce dernier cas, une valeur positive sera renvoyées. 
Dans tous les cas, la valeur absolue indiquera la position du premier caractères permettant de 
produire le résultat.

Attention : notez bien que la comparaison porte au maximum sur les length premiers caractères 
de la chaîne. 

*/