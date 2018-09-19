#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*r;
	unsigned int	n;
	unsigned int	i;

	n = ft_strlen(s);
	r = ft_strnew(n);
	i = 0;
	while (i < n)
	{
		r[i] = f(s[i]);
		i++;
	}
	return (r);
}