#include "libft.h"

void	*ft_bzero(void *d, unsigned int n)
{
	return (ft_memset(d, 0, n));
}