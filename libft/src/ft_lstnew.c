#include "libft.h"

t_list	*ft_lstnew(void const *content, unsigned int content_size)
{
	t_list	*r;

	r = MALLOC(t_list, 1);
	r->content = ft_memcpy(malloc(content_size), content, content_size);
	if (content == 0)
		r->content_size = 0;
	else
		r->content_size = content_size;
	return (r);
}