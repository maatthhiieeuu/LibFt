/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstdelone.c                     ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/03  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/08/17  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst || !del)
		return;

	del(lst->content);
	free(lst);
}


/*

Function name:					ft_lstdelone

Prototype:						void ft_lstdelone(t_list *lst, void (*del)(void *));

Paramètres:						lst:	L’élément à free
								del:	L’adresse de la fonction permettant de
										supprimer le contenu de l’élément.

Valeur de retour:				Aucune

Fonctions externes autorisées:	free

Description:					Libère la mémoire de l’élément passé en argument en
								utilisant la fonction ’del’ puis avec free(3). La
								mémoire de ’next’ ne doit pas être free.

*/