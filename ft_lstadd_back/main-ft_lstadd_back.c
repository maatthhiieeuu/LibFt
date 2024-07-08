/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_lstadd_back.c              ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/08  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/08  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstadd_back.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("\033[1;34m\n\nDébut du test de la fonction ft_lstsize.\n\033[1;0m");
	printf("\033[1;33m\nInitialisation des variables:\n\033[1;0m");


	int	result = 0;
	t_list	*node1		= NULL;
	t_list	*node2		= NULL;
	t_list	*node3		= NULL;
	t_list	*node4		= NULL;
	t_list	*last_tmp	= NULL;
	t_list	*last_node	= NULL;

	printf("\033[1;35m\n-result = \033[1;32m%d\n\033[1;0m", result);
	printf("\033[1;35m\n-node1  = \033[1;32m%p\n\033[1;0m", (void *)node1);
	printf("\033[1;35m\n-node2  = \033[1;32m%p\n\033[1;0m", (void *)node2);
	printf("\033[1;35m\n-node3  = \033[1;32m%p\n\033[1;0m", (void *)node3);
	printf("\033[1;35m\n-node4  = \033[1;32m%p\n\033[1;0m", (void *)node4);
	printf("\033[1;35m\n-last_tmp   = \033[1;32m%p\n\033[1;0m", (void *)last_tmp);


	printf("\033[1;33m\nCréation des noeuds:\n\033[1;0m");


	node1	= ft_lstnew((void *)(size_t)1);
	node2	= ft_lstnew((void *)(size_t)2);
	node3	= ft_lstnew((void *)(size_t)3);

	printf("\033[1;35m\n-NODE1:		\033[1;32m%p\033[1;0m\n", (void *)node1);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node1->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node1->next);

	printf("\033[1;35m\n-NODE2:		\033[1;32m%p\033[1;0m\n", (void *)node2);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node2->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node2->next);

	printf("\033[1;35m\n-NODE3:		\033[1;32m%p\033[1;0m\n", (void *)node3);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node3->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node3->next);


	printf("\033[1;33m\nChainage des noeuds:\n\033[1;0m");

	last_tmp	= NULL;

	//last_tmp = node3;
	ft_lstadd_back(&last_tmp, node1);
	ft_lstadd_back(&last_tmp, node2);
	ft_lstadd_back(&last_tmp, node3);

	//ft_lstadd_front(&last_tmp, node3);
	//ft_lstadd_front(&last_tmp, node2);
	//ft_lstadd_front(&last_tmp, node1);

	//node3->next = NULL;

	printf("\033[1;35m\n-NODE1:		\033[1;32m%p\033[1;0m\n", (void *)node1);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node1->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node1->next);

	printf("\033[1;35m\n-NODE2:		\033[1;32m%p\033[1;0m\n", (void *)node2);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node2->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node2->next);

	printf("\033[1;35m\n-NODE3:		\033[1;32m%p\033[1;0m\n", (void *)node3);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node3->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node3->next);


	printf("\033[1;33m\nComptage du nombre de noeud dans la liste:\n\033[1;0m");


	result	= ft_lstsize(node1);

	printf("\033[1;35m\nNombre de noeud dans la liste: \033[1;32m%d.\n\033[1;0m", result);


	printf("\033[1;33m\nDernier noeud de la liste:\n\033[1;0m");


	last_node	= ft_lstlast(node1);

	printf("\033[1;35m\n-LAST NODE:	\033[1;32m%p\033[1;0m\n", (void *)last_node);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)last_node->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)last_node->next);


	printf("\033[1;33m\nCréation de NODE4:\n\033[1;0m");


	node4	= ft_lstnew((void *)(size_t)4);

	printf("\033[1;35m\n-NODE4:		\033[1;32m%p\033[1;0m\n", (void *)node4);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node4->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node4->next);


	printf("\033[1;33m\nListe avant ajout de NODE4:\n\033[1;0m");


	printf("\033[1;35m\n-NODE1:		\033[1;32m%p\033[1;0m\n", (void *)node1);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node1->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node1->next);

	printf("\033[1;35m\n-NODE2:		\033[1;32m%p\033[1;0m\n", (void *)node2);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node2->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node2->next);

	printf("\033[1;35m\n-NODE3:		\033[1;32m%p\033[1;0m\n", (void *)node3);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node3->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node3->next);

	printf("\033[1;35m\n-NODE4:		\033[1;32m%p\033[1;0m\n", (void *)node4);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node4->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node4->next);

	ft_lstadd_back(&node1, node4);


	printf("\033[1;33m\nAjout de NODE4 à la fin de la liste:\n\033[1;0m");

	printf("\033[1;35m\n-NODE1:		\033[1;32m%p\033[1;0m\n", (void *)node1);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node1->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node1->next);

	printf("\033[1;35m\n-NODE2:		\033[1;32m%p\033[1;0m\n", (void *)node2);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node2->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node2->next);

	printf("\033[1;35m\n-NODE3:		\033[1;32m%p\033[1;0m\n", (void *)node3);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node3->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node3->next);

	printf("\033[1;35m\n-NODE4:		\033[1;32m%p\033[1;0m\n", (void *)node4);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)node4->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)node4->next);


	printf("\033[1;33m\nDernier noeud de la liste:\n\033[1;0m");


	last_node	= ft_lstlast(node1);

	printf("\033[1;35m\n-LAST NODE:	\033[1;32m%p\033[1;0m\n", (void *)last_node);
	printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)last_node->content);
	printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)last_node->next);


	printf("\033[1;33m\nComptage du nombre de noeud dans la liste:\n\033[1;0m");


	result	= ft_lstsize(node1);

	printf("\033[1;35m\nNombre de noeud dans la liste: \033[1;32m%d.\n\033[1;0m", result);

	free(node1);
	free(node2);
	free(node3);

	printf("\033[1;33m\nFin du programme.\n\033[1;0m");

	return(0);
}

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst)
		return;

	new->next = *lst;
	*lst = new;
}

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
