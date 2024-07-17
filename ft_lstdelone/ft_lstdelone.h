#ifndef FT_LSTDELONE_H
#define FT_LSTDELONE_H

#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	del(void *data);
char	*ft_strdup(const char *source);
size_t	ft_strlen(const char *string);

#endif //FT_LSTDELONE_H