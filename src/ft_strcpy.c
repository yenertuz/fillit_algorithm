#include "libft.h"

char	*ft_strcpy(char *d, const char *s)
{
	unsigned int	n;

	n = ft_strlen(s);
	ft_memcpy((void*)(d), (const void*)(s), n);
	d[n] = 0;
	return (d);
}