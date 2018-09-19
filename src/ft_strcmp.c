#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	n1;
	unsigned int	n2;

	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	if (n1 < n2)
		n1 = n2;
	return (ft_memcmp((const void*)(s1), (const void*)(s2), n1));
}