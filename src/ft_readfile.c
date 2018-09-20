#include "libft.h"

char	*ft_readfile(const char *p)
{
	int 	fd;
	char	b[2400];
	char	*r;
	char	*t;

	fd = open(p, O_RDONLY);
	r = ft_strdup("");
	if (fd == -1)
		exit(-1);
	while (read(fd, &b, 2400))
	{
		t = ft_strjoin(r, b);
		free(r);
		r = t;
	}
	close(fd);
	return (r);
}
