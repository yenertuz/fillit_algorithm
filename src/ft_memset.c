#include "libft.h"

void	*ft_memset(void *d, int c, unsigned int n)
{
	char	*ptr;

	ptr = (char*)(d);
	while (n > 0)
	{
		*ptr = (char)(c);
		n--;
		ptr++;
	}
	return (d);
}