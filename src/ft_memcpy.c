#include "libft.h"

void	*ft_memcpy(void *d, const void *s, unsigned int n)
{
	char	*ptr;

	ptr = (char*)(d);
	while (n > 0)
	{
		*ptr = *((char*)(s));
		s++;
		ptr++;
		n--;
	}
	return (d);
}