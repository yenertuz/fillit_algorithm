#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	unsigned int	l;

	l = ft_strlen(n);
	while (*h != 0)
	{
		if (ft_memcmp((const void*)(h), (const void*)(n), l + 1))
			return ((char*)h);
		h++;
	}
	return (0);
}