#include "libft.h"

void	ft_lstiter(t_list *s, void (*f)(t_list *e))
{
	while (s != 0)
	{
		f(s);
		s = s->next;
	}
}