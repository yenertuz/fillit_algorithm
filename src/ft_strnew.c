#include "libft.h"

char	*ft_strnew(unsigned int n)
{
	return ((char*)(ft_memalloc(n + 1)));
}