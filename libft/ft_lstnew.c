/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/ft_lstnew.c                        ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/01  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/05  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstnew.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	if(!content)
		return(NULL);

	t_list	*new_node = NULL;
	
	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return(NULL);

	new_node->content = content;
	new_node->next = NULL;

	return(new_node);
}

/*

Function name :					ft_lstnew

Prototype :						t_list *ft_lstnew(void *content);

Paramètres :					- content : Le contenu du nouvel élément.

Valeur de retour :				Le nouvel élément

Fonctions externes autorisées :	malloc

Description :					Alloue (avec malloc(3)) et renvoie un nouvel
								élément. La variable membre ’content’ est
								initialisée à l’aide de la valeur du paramètre
								’content’. La variable ’next’ est initialisée à
								NULL.

*/