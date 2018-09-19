#include "libft.h"

static int	check_if_whitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	l;
	char			*r;

	l = 0;
	while (*s && check_if_whitespace(*s) == 1)
		s++;
	while (s[l] && check_if_whitespace(s[l]) == 0)
		l++;
	r = ft_strsub(s, 0, l);
	return (r);
}