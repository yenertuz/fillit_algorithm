#include "fillit.h"


int	main(int ac, char **av)
{
	char	*s;

	s = ft_readfile("valid.in");
	analyze_file(s);
	ft_putstr(s);
	free(s);
	return (0);
}