#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	return (ft_memcmp((const void*)(s1), (const void*)(s2), n));
}