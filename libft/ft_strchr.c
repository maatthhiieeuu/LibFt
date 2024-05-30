/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strchr.c                        ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/30  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/30  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stddef.h>

char *ft_strchr(const char *string, int searched_char)
{
	int		i = 0;
	char	c = (char)searched_char;
	char	*str = (char *)string;
	while(string[i] != '\0')
	{
		if(str[i] == c)
			return(str + i);
		i++;
	}
	return(NULL);
}

/*

Entête à inclure

#include <string.h>  // <cstring> en C++

Fonction strchr :

char * strchr( const char * string, int searchedChar );

Cette fonction recherche la première occurrence du caractère passé en second paramètre dans la 
chaîne de caractères spécifiée via le premier paramètre.
la fonction strchr est très proche de la fonction strrchr. La différence réside dans le fait 
que strchr renvoi la position de la première occurrence du caractère recherché alors que strrchr 
renvoi la dernière occurrence (recherche par la droite : r signifiant right).
Paramètres

    string : la chaîne de caractères dans laquelle effectuer la recherche.
    searchedChar : le caractère recherché.

Valeur de retour :

Soit le caractère recherché est présent dans la chaîne et, dans ce cas, un pointeur sur la 
première occurrence du caractère vous sera retourné. Soit le caractère n'est pas présent dans 
la chaîne et dans ce cas, le pointeur NULL vous sera renvoyé. 

*/