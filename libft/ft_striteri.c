/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_striteri.c                      ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/22  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/26  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
//#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if(!s || !f)
		return;

	size_t	i	= 0;

	while(s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*

Function name:					ft_striteri

Prototype:						void ft_striteri(char *s, void (*f)(unsigned int, char*));

Paramètres:						s:La chaîne de caractères sur laquelle itérer.
								f: La fonction à appliquer à chaque caractère.

Valeur de retour:				Aucune

Fonctions externes autorisées:	Aucune

Description:					Applique la fonction ’f’ à chaque caractère de la
								chaîne de caractères transmise comme argument,
								et en passant son index comme premier argument.
								Chaque caractère est transmis par adresse à ’f’
								afin d’être modifié si nécessaire.

*/