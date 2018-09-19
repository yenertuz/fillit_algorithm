#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isprint(c) || ft_isdigit(c));
}