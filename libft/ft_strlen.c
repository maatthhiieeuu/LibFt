/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strlen.c                        ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h> //Pour size_t

size_t	ft_strlen(const char *string)
{
	if(!string)
		return(0);

	size_t	len	= 0;

	while(string[len] != '\0')
	{
		len += 1;
	}
	
	return (len);
}

/*

Cette fonction permet de calculer la longueur, exprimée en nombre de caractères, de la chaîne de 
caractères. En langage C, les chaînes de caractères sont dites AZT : A Zéro Terminal. Cela 
signifie qu'une chaîne de caractères se termine forcément par un code ASCII nul (pouvant aussi 
être représenté par '\0'). Attention, la fonction strlen ne compte pas ce caractère de fin : 
seuls les caractères "utiles" de la chaîne sont considérés. 

*/