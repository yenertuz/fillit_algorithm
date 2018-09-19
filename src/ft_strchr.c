#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*r;

	r = (char*)(ft_memchr((const void *)(s), c, ft_strlen(s)));
	return (r);
}