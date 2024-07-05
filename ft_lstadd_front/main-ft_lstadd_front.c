/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_lstadd_front.c             ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/04  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/04  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstadd_front.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new);

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node = NULL;
	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return(NULL);

	new_node->content = content;
	new_node->next = NULL;

	return(new_node);
}

int main()
{
	char a = 'A';
	char b = 'B';
	char c = 'C';
	char d = 'D';

	printf("\033[1;33m \nCréation des noeuds de t_list.\n\033[1;0m");

	t_list *node1 = ft_lstnew(&a);
	printf("\nnode1 :|%c|", *(char *)node1->content);

	t_list *node2 = ft_lstnew(&b);
	printf("\nnode2 :|%c|", *(char *)node2->content);

	t_list *node3 = ft_lstnew(&c);
	printf("\nnode3 :|%c|", *(char *)node3->content);

	t_list *node4 = ft_lstnew(&d);
	printf("\nnode4 :|%c|\n\n", *(char *)node4->content);

	printf("\033[1;33m \nChainage de la liste.\n\033[1;0m");


	t_list *next_tmp = NULL;

	ft_lstadd_front(&next_tmp, node1);
	printf("\nnode1 :|%c|", *(char *)node1->content);
	ft_lstadd_front(&next_tmp, node2);
	printf("\nnode2 :|%c|", *(char *)node2->content);
	ft_lstadd_front(&next_tmp, node3);
	printf("\nnode3 :|%c|", *(char *)node3->content);
	ft_lstadd_front(&next_tmp, node4);
	printf("\nnode4 :|%c|", *(char *)node4->content);

	printf("\n\n\033[1;33mImpression de la liste du début vers la fin.\n\n\033[1;0m");

	// Affichage de la liste next_tmp
	t_list *current = next_tmp;
	size_t	i 	= 1;
	while (current != NULL)
	{
		printf("\nnode%ld: |%c| -> ", i, *(char *)current->content);
		current = current->next;
		i++;
	}

	printf("\n\n\033[1;33mInversement de la liste.\n\n\033[1;0m");

	next_tmp = NULL;

	ft_lstadd_front(&next_tmp, node4);
	printf("\nnode4 :|%c|", *(char *)node4->content);
	ft_lstadd_front(&next_tmp, node3);
	printf("\nnode3 :|%c|", *(char *)node3->content);
	ft_lstadd_front(&next_tmp, node2);
	printf("\nnode2 :|%c|", *(char *)node2->content);
	ft_lstadd_front(&next_tmp, node1);
	printf("\nnode1 :|%c|\n",*(char *)node1->content);

	current = next_tmp;

	printf("\nnode 1: |%c|", *(char *)current->content);
	current = current->next;
	printf("\nnode 2: |%c|", *(char *)current->content);
	current = current->next;
	printf("\nnode 3: |%c|", *(char *)current->content);
	current = current->next;   
	printf("\nnode 4: |%c|\n", *(char *)current->content);
	current = current->next;

	node1->next = NULL;

	printf("\n\nFin du programme.\n\n");

	return 0;
}
