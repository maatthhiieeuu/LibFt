/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_memcpy.c                        ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/15  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/15  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

//#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void	*memcpy(void *destination, const void *source, size_t size)
{
	char *dest = (char *)destination;
	char *src = (char *)source;
	size_t i = 0;

	if(destination == NULL)
	{
		printf("ERREUR : Pointeur destination de la fonction memcpy NULL !");
		return(NULL);
	}
	if(source == NULL)
	{
		printf("ERREUR : Pointeur source de la fonction memcpy NULL !");
		return(NULL);
	}

	while(i < size)
	{
		dest[i] = src[i];
		i += 1;
	}
	return (destination);
}

/*

Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre source, et dont la 
taille est spécifiée via le paramètre size, dans un nouvel emplacement désigné par le paramètre 
destination. Il est bien entendu qu'il est de votre responsabilité d'allouer suffisamment de 
mémoire pour le bloc de destination afin qu'il puisse contenir toutes les données.

En cas de chevauchement des deux blocs de mémoire (source et destination) le comportement de la 
fonction memcpy n'est pas garanti. Dans ce cas, veuillez préférer l'utilisation de la fonction 
memmove.

Attention, contrairement à strcpy, aucun test sur une éventuelle valeur nulle n'est réalisé 
pour stopper la copie. Seule la taille du bloc sera considérée.
Paramètres

    destination : permet de spécifier l'adresse du bloc mémoire devant recevoir les données à 
    copier. Vous devez pré-allouer ce bloc de mémoire (certainement via la fonction malloc).
    source : permet de définir l'adresse du bloc de mémoire à dupliquer.
    size : indique le nombre d'octets à dupliquer.

Valeur de retour

La fonction renvoie l'adresse du bloc de mémoire de destination. 

*/