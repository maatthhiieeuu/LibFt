/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstadd_front.c                  ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/04  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstadd_front.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!new)
		return;

	new->next = *lst;
	*lst = new;
}

/*

Function name:					ft_lstadd_front
 
Prototype:						void ft_lstadd_front(t_list **lst, t_list *new);
 
Paramètres:				lst:	L’adresse du pointeur vers le premier élément
								de la liste.
						new:	L’adresse du pointeur vers l’élément à
								rajouter à la liste.

Valeur de retour:				Aucune
 
Fonctions externes autorisées:	Aucune
 	
Description:					Ajoute l’élément ’new’ au début de la liste.
 

*/

