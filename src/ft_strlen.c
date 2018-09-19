#include "libft.h"

unsigned int	ft_strlen(const char *s)
{
	unsigned int	n;

	n = 0;
	while (s[n] != 0)
	{
		n++;
	}
	return (n);
}