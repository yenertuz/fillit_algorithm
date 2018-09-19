#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, unsigned int n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}