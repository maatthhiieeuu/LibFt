#ifndef LSTADD_FRONT_H
#define LSTADD_FRONT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);

#endif //LSTADD_FRONT_H