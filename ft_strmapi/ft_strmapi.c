/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_strmapi.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/06/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/06/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	
}








/*

Function name:					ft_strmapi

Prototype:						char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Paramètres:						s: La chaîne de caractères sur laquelle itérer.
								f: La fonction à appliquer à chaque caractère.

Valeur de retour:				La chaîne de caractères résultant des applications
								successives de ’f’.
								Retourne NULL si l’allocation échoue.

Fonctions externes autorisées:	malloc

Description:					Applique la fonction ’f’ à chaque caractère de la
								chaîne de caractères passée en argument pour créer
								une nouvelle chaîne de caractères (avec malloc(3))
								résultant des applications successives de ’f’.

*/