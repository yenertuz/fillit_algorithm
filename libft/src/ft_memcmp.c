#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const char	*ptr1;
	const char	*ptr2;

	ptr1 = (const char *)(s1);
	ptr2 = (const char *)(s2);
	while (n > 0 && *ptr1 == *ptr2)
	{
		n--;
		ptr1++;
		ptr2++;
	}
	if (n == 0)
		return (0);
	else
		return (*ptr1 - *ptr2);
}