#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	n1;
	unsigned int	n2;
	char			*r;

	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	r = ft_strnew(n1 + n2);
	ft_memcpy((void*)(r), (void const*)(s1), n1);
	ft_memcpy((void*)(r + n1), (void const*)(s2), n2);
	return (r);
}