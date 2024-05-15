/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_isprint.c                       ::::::  :::::::   :::::::::::            */
/*                                                     +:: ::+ +:: ::+   +::::::::::+            */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/05/14  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/05/14  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"

int	ft_isprint(int character)
{
	if(character >= 32 && character <= 126)
		return (16384);
	return (0);
}

/*

Cette fonction permet de tester si un caractère s'affiche (is printable) ou non. Parmis ces 
caractères on retrouve l'ensemble des caractères ayant une représentation graphique (ceux pour 
qui la fonction isgraph retourne vrai) ainsi que le caractère d'espacement (de code 0x20). 
Autrement dit, il s'agit de l'ensemble des caractères ASCII, exceptés les caractères de 
contrôles (qui eux peuvent être vérifiés via la fonction iscntrl). 

*/