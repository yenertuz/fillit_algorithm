#include "libft.h"

void	ft_lstdel(t_list **a, void (*del)(void*, unsigned int))
{
	t_list	*next;

	next = (*a)->next;
	del((*a)->content, (*a)->content_size);
	(*a) = 0;
	if (next != 0)
		ft_lstdel(&next, del);
}