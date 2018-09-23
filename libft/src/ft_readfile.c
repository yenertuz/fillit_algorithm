#include "libft.h"

char	*ft_readfile(const char *p)
{
	int 	fd;
	char	b[1200];
	char	*r;
	char	*t;

	fd = open(p, O_RDONLY);
	if (fd == -1)
		ER("error: cannot open file");
	ft_bzero(b, 1200);
	r = ft_strdup("");
	while (read(fd, b, 1200))
	{
		t = ft_strjoin(r, b);
		free(r);
		r = t;
		ft_bzero(b, 1200);
	}
	close(fd);
	return (r);
}
