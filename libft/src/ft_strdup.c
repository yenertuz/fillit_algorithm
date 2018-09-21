#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*d;
	unsigned int	n;

	n = ft_strlen(s);
	d = (char*)malloc(sizeof(char) * (n + 1));
	ft_strcpy(d, s);
	d[n] = 0;
	return (d);
}