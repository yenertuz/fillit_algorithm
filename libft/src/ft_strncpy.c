#include "libft.h"

char	*ft_strncpy(char *d, const char *s, unsigned int n)
{
	unsigned int	l;

	l = ft_strlen(s);
	if (l >= n)
	{
		ft_memcpy((void*)(d), (const void*)(s), n);
	}
	else
	{
		ft_memcpy((void*)(d), (const void*)(s), l);
		ft_bzero((void*)(d + l), n - l);
	}
	return (d);
}