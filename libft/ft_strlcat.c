/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strlcat.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/27  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	if(!dst)
		return(0);

	size_t	dst_len	= ft_strlen(dst);
	size_t	src_len	= ft_strlen(src);
	size_t	i		= 0;

	if(!src)
		return(dst_len);

	if(size <= dst_len)
		return(src_len + size);

	while(src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i += 1;
	}

	dst[dst_len + i] = '\0';

	return(dst_len + src_len);
}

/*

strlcat - concatène des chaînes en toute sécurité.
SYNOPSIS

c

#include <string.h>

size_t strlcat(char *dst, const char *src, size_t size);

DESCRIPTION

La fonction strlcat() concatène la chaîne src à la fin de dst. Elle prend la taille complète du tampon dst et garantit que le résultat est une chaîne terminée par un caractère nul, sauf si size est 0 ou si la longueur initiale de dst est supérieure ou égale à size.

La fonction fonctionne comme strncat(), mais prend size au lieu du nombre de caractères libres restants dans dst et s'assure toujours que le résultat est terminé par un caractère nul (à moins que size soit 0 ou que la longueur initiale de dst soit supérieure ou égale à size).
PARAMÈTRES

    dst : Le tampon de destination, où src sera concaténé.
    src : La chaîne source à concaténer.
    size : La taille totale du tampon dst.

VALEUR RENVOYÉE

strlcat() renvoie la longueur totale de la chaîne qu'elle a essayé de créer. Cela signifie la longueur initiale de dst plus la longueur de src. Si la valeur retournée est supérieure ou égale à size, une troncation a eu lieu.

Pour vérifier si une troncation s'est produite, vous pouvez comparer la valeur retournée à size. Si la valeur retournée est supérieure ou égale à size, cela signifie que le tampon de destination n'était pas assez grand pour contenir toute la chaîne concaténée.
EXEMPLE

c

char dst[20] = "Hello";
char src[] = " World";

size_t result = strlcat(dst, src, sizeof(dst));

// dst vaut maintenant "Hello World"
// result vaut 11 (5 + 6)

REMARQUES

    La fonction strlcat est conçue pour éviter les débordements de tampon et pour fournir une méthode plus sûre de concaténation de chaînes en C.
    Contrairement à strncat(), strlcat() prend en compte la taille totale du tampon de destination plutôt que le nombre de caractères à copier.

CONFORMITÉ

La fonction strlcat est conforme aux extensions de chaîne de la bibliothèque BSD.

*/