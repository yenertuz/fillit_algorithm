#include "libft.h"

void			*ft_memchr(const void *s, int c, unsigned int n)
{
	const char	*ptr;

	ptr = (const char *)(s);
	while (n > 0)
	{
		if (*ptr == (char)(c))
			return ((void*)(ptr));
		n--;
		ptr++;
	}
	return (0);
}