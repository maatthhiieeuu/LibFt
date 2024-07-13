/* ********************************************************************************************* */
/*                                                                                               */
/*   Project : libft/main-ft_lstdelone.c              ::::::  ::::::    :::::::::              */
/*                                                     +:: ::+ +:: ::+   +:::::::::+             */
/*   By: Matthieu Boegler                             +#:  +#::#+ :#+   +:#      #:+             */
/*      <https://github.com/maatthhiieeuu>           ###   ##:## ###   #::::::::#                */
/*                                                  ###    ###  ###   ###      ###               */
/*   Created: 2024/07/  by m.boegler             ###         ###   ###########                 */
/*   Updated: 2024/07/  by m.boegler            ###         ###   #########                    */
/*                                                                                               */
/* ********************************************************************************************* */

#include "ft_lstdelone.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("\033[1;34m\n\nDébut du test de la fonction ft_lstsize.\n\033[1;0m");
	// Création de trois nœuds
    t_list *node1 = ft_lstnew(malloc(10)); // Exemple de contenu
    t_list *node2 = ft_lstnew(malloc(20)); // Exemple de contenu
    t_list *node3 = ft_lstnew(malloc(30)); // Exemple de contenu

    // Ajout des nœuds à la liste
    t_list *list = NULL;
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Suppression du deuxième nœud
    t_list *temp = list;
    if (temp && temp->next) {
        t_list *node_to_delete = temp->next; // Le deuxième nœud
        temp->next = node_to_delete->next;   // Rechainage de la liste
        ft_lstdelone(node_to_delete, del); // Suppression du nœud
    }

    // Vérification de la liste après suppression
    temp = list;
    while (temp) {
        printf("Node content: %p\n", temp->content);
        temp = temp->next;
    }

    // Libération des nœuds restants
    while (list) {
        t_list *next = list->next;
        ft_lstdelone(list, del);
        list = next;
    }

    return 0;
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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return;

	if (*lst == NULL)
	{
		*lst = new;
		return;
	}

	t_list	*tmp = *lst;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	new->next = NULL;
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

void	del(void *data)
{
	if(!data)
		return;

	printf("\033[1;35m\n-data:		\033[1;32m%p\033[1;0m\n", (void *)data);
	//printf("   \033[1;35m->content =	\033[1;32m%d\n\033[1;31m\033[1;0m", (int)(size_t)data->content);
	//printf("   \033[1;35m->next    =	\033[1;32m%p\n\033[1;0m", (void *)data->next);

	free(data);
}

char	*ft_strdup(const char *source)
{
	if(!source)
		return(NULL);

	char	*ptr	= NULL;
	size_t	len_source	= 0;
	size_t	i			= 0;

	len_source	= ft_strlen(source);
	ptr			= (char *)malloc((len_source + 1) * sizeof(char));

	if(!ptr)
	    return(NULL);

	while(source[i] != '\0')
	{
	    ptr[i] = source[i];
	    i += 1;
	}

	ptr[len_source] = '\0';

	return(ptr);
}

size_t	ft_strlen(const char *string)
{
	if(!string)
		return(0);

	size_t	len	= 0;

	while(string[len] != '\0')
	{
		len += 1;
	}
	
	return (len);
}