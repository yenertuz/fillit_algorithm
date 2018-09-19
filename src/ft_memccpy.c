#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, unsigned int n)
{
	char		*ptr1;
	const char	*ptr2;

	ptr1 = (char*)(d);
	ptr2 = (const char*)(s);
	while (n > 0 && *ptr2 != (char)c)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		n--;
	}
	return (d);
}