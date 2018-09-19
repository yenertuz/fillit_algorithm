#include "libft.h"

void	*ft_memalloc(unsigned int n)
{
	void	*r;

	r = MALLOC(void, n);
	ft_bzero(r, n);
	return (r);
}