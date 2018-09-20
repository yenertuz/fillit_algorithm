#include "libft.h"

int	ft_error(char const *s)
{
	ft_putendl_fd(s, 2);
	exit(-1);
	return (0);
}