/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_memset.c                        ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/15  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/15  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stddef.h>

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

/*

Cette fonction permet de remplir une zone mémoire, identifiée par son adresse et sa taille, avec une valeur précise. 

Valeur de retour:	Après exécution de la fonction, l'adresse de la mémoire ré-initialisée vous sera retournée (autrement dit la valeur du paramètre pointer). 

*/