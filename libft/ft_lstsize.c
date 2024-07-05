/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstsize.c                       ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/04  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstsize.h"
#include <stddef.h>
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	if(!lst)
		return(0);

	int	result = 0;

	while(lst != NULL)
	{
		result++;
		lst = lst->next;
	}

	return(result);
}

/*

Function name :					ft_lstsize

Prototype :						int ft_lstsize(t_list *lst);

Paramètres :					lst: Le début de la liste.

Valeur de retour :				Taille de la liste

Fonctions externes autorisées :	Aucune

Description :					Compte le nombre d’éléments de la liste.

*/




