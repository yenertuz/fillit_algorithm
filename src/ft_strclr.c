#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int	n;

	n = ft_strlen(s);
	ft_bzero(s, n);
}