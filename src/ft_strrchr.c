#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	n;

	n = ft_strlen(s);
	while (n > 0)
	{
		if (s[n - 1] == c)
			return ((char*)s + n - 1);
		n--;
	}
	return (0);
}