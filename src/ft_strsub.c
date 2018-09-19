#include "libft.h"

char	*ft_strsub(char const *s, unsigned int b, unsigned int l)
{
	char	*r;

	r = ft_strnew(l);
	ft_strncpy(r, s + b, l);
	return (r);
}