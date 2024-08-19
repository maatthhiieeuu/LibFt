/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstadd_back.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/08  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stddef.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!new)
		return;

	t_list	*tmp	= (void	*)lst;

	if(tmp == NULL)
	{
		*lst	= new;
		return;
	}

	while(tmp->next != NULL || tmp->next == new)
	{

		tmp	= tmp->next;

		if(tmp->next == NULL)
		{
			tmp->next	= new;
			new->next	= NULL;
		}
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