#include "libft.h"

void	ft_lstadd(t_list **a, t_list *new)
{
	new->next = (*a);
	(*a) = new;
}