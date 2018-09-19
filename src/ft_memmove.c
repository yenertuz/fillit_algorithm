#include "libft.h"

void			*ft_memmove(void *d, void *s, unsigned int n)
{
	char	*ptr1;
	char	*ptr2;	

	if (s > d)
		return (ft_memcpy(d, s, n));
	ptr1 = (char*)(d + n - 1);
	ptr2 = (char*)(s + n - 1);
	while (n > 0)
	{
		*ptr1 = *ptr2;
		n--;
		ptr1--;
		ptr2--;
	}
	return (d);
}