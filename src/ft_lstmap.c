#include "libft.h"

t_list	*ft_lstmap(t_list *s, t_list* (*f)(t_list *e))
{
	t_list	*r;

	r = 0;
	while (s)
	{
		ft_lstadd(&r, f(s));
		s = s->next;
	}
	return (r);
}