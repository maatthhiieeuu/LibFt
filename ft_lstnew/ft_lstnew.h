#ifndef LSTNEW_H
#define LSTNEW_H

t_list	*ft_lstnew(void *content);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif //LSTNEW_H