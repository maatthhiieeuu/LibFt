/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstdelone.c                   ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/0  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/0  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstclear.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if(!lst || !del)
		return;

	t_list	*temp = NULL;
	temp = (*lst)->next;
	printf("\033[1;30m\nEntrée dans la fonction ft_lstclear\n\033[1;0m");
	while(temp)
	{
		printf("\033[1;30m\nEntrée dans la boucle de ft_lstclear\n\033[1;0m");
		temp = (*lst)->next;
		del((*lst)->content);
		free(lst);
		lst = NULL;
	}
}

/*

Function name :					ft_lstclear

Prototype :						void ft_lstclear(t_list **lst, void (*del)(void*));

Paramètres :					lst:	L’adresse du pointeur vers un élément.
								del:	L’adresse de la fonction permettant de
										supprimer le contenu d’un élément.

Valeur de retour :				Aucune

Fonctions externes autorisées :	free

Description :					Supprime et libère la mémoire de l’élément passé en
								paramètre, et de tous les éléments qui suivent, à
								l’aide de ’del’ et de free(3)
								Enfin, le pointeur initial doit être mis à NULL.

*/