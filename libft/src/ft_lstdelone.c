#include "libft.h"

void	ft_lstdelone(t_list **a, void (*del)(void *, unsigned int))
{
	del((*a)->content, (*a)->content_size);
	free(*a);
	(*a) = 0;
}