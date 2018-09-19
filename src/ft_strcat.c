#include "libft.h"

char	*ft_strcat(char *d, const char *s)
{
	unsigned int	n1 = ft_strlen(d);
	unsigned int	n2 = ft_strlen(s);

	ft_memcpy((void*)(d + n1), (const void *)(s), n2);
	d[n1 + n2] = 0;
	return (d);
}