/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstlast.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/05  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stddef.h>


t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);

	while(lst->next != NULL)
	{
		lst = lst->next;
	}

	return(lst);
}

/*

Function name:					ft_lstlast

Prototype:						t_list *ft_lstlast(t_list *lst);

Paramètres:						lst: Le début de la liste.

Valeur de retour:				Dernier élément de la liste

Fonctions externes autorisées:	Aucune

Description:					Renvoie le dernier élément de la liste.

*/