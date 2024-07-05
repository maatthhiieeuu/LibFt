#ifndef FT_LSTSIZE_H
#define FT_LSTSIZE_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void	*content);
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif //FT_LSTSIZE_H