/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_memchr.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/31  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/31  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stddef.h>

void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	char	chr = (char)searched_char;
	char	*mem_blc = (char *)memory_block;
	size_t	i = 0;
	if(!memory_block)
		return(NULL);
	while(i < size)
	{
		if(mem_blc[i] == chr)
			return(mem_blc + i);
		i += 1;
	}
	return(NULL);
}

/*

Entête à inclure:	#include <string.h>  // <cstring> en C++

Fonction memchr:	void * memchr( const void * memoryBlock, int searchedChar, size_t size );

Recherche la première occurence d'une valeur typée int, mais interprétée en tant que char, dans 
un bloc de mémoire. Comme on traite un bloc de mémoire et non pas une chaîne de caractères AZT 
(à zéro terminal), nous devons aussi spécifier à la fonction la taille du bloc de mémoire dans 
lequel réaliser la recherche.
Paramètres

    memoryBlock : un pointeur indiquant l'adresse du bloc mémoire à utiliser pour la recherche.
    searchedChar : le code numérique de l'octet à rechercher dans le bloc.
    size : indique la taille du bloc de mémoire dans lequel opérer la recherche.

Valeur de retour

Si la fonction a trouvé le caractère recherché, la fonction renvoie un pointeur vers sa première 
occurence. Si ce n'est pas le cas, la fonction renvoie la valeur NULL. 

*/