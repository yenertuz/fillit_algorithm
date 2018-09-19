#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	n;
	unsigned int	i;

	n = ft_strlen(s);
	r = ft_strnew(n);
	i = 0;
	while (i < n)
	{
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}