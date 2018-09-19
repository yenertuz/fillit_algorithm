#include "libft.h"

char	*ft_strncar(char *d, const char *s, unsigned int n)
{
	unsigned int	n1;
	unsigned int	n2;

	n1 = ft_strlen(d);
	n2 = ft_strlen(s);
	if (n2 > n)
		n2 = n;
	ft_memcpy((void*)(d + n1), (const void*)(s), n2);
	d[n1 + n2] = 0;
	return (d);
}