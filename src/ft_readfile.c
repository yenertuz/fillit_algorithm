#include "libft.h"

char	*ft_readfile(const char *p)
{
	int 	fd;
	char	b[2400];
	char	*r;
	char	*t;

	fd = open(p, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &b, 2400))
	{
		t = ft_strcat(b, r);
		free(r);
		r = t;
	}
	close(fd);
	return (r);
}
