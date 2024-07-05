/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstadd_back.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/05  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstadd_back.h"


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!lst)
		return;

	while(lst != NULL)
	{
		lst = lst->next;
	}
	if(lst->next == NULL)
	{
		lst->next = new;
		new->next = NULL;
	}
}

/*

Function name:					ft_lstadd_back

Prototype:						void ft_lstadd_back(t_list **lst, t_list *new);

Paramètres:						lst: L’adresse du pointeur vers le premier élément de la liste.
								new: L’adresse du pointeur vers l’élément à rajouter à la liste.

Valeur de retour:				Aucune

Fonctions externes autorisées:	Aucune

Description:					Ajoute l’élément ’new’ à la fin de la liste.

*/