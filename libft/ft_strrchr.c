/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strrchr.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/30  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/06  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *string, int searched_char)
{
	if(!string)
		return (NULL);

	size_t	str_len = ft_strlen(string);
	char	*str_end = (char *)string + str_len;
	char	chr = (char)searched_char;

	while(str_end >= string)
	{
		if(*str_end == chr)
			return(str_end);
		str_end--;
	}

	return(NULL);
}

/*

Entête à inclure

#include <string.h>  // <cstring> en C++

Fonction strrchr

char * strrchr( const char * string, int searchedChar );

Cette fonction recherche la dernière occurrence du caractère passé en second paramètre dans la chaîne de caractères spécifiée via le premier paramètre.
la fonction strrchr est très proche de la fonction strchr. La différence réside dans le fait que strchr renvoi la position de la première occurrence du caractère recherché alors que strrchr renvoi la dernière occurrence (recherche par la droite : r signifiant right).
Paramètres

    string : la chaîne de caractères dans laquelle effectuer la recherche.
    searchedChar : le caractère recherché.

Valeur de retour

Soit le caractère recherché est présent dans la chaîne et, dans ce cas, un pointeur sur la dernière occurrence du caractère vous sera retourné. Soit le caractère n'est pas présent dans la chaîne et dans ce cas, le pointeur NULL vous sera renvoyé.


*/