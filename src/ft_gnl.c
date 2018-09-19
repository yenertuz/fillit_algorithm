#include "libft.h"

static int	read_file(int fd, char **s)
{
	char	buffer[2400];
	int		z;
	char	*tmp;

	ft_bzero(buffer, 2400);
	z = read(fd, buffer, 2400);
	if (z == 0 || z == -1)
		return (z);
	(*s) = ft_strdup(buffer);
	while (1)
	{
		ft_bzero(buffer, 2400);
		z = read(fd, buffer, 2400);
		if (z == 0)
			return (1);
		else
		{
			tmp = ft_strcat(*s, buffer);
			free(*s);
			*s = tmp;
		}
	}
}

static int	fetch_line(char **line, char *s, unsigned int *i)
{
	int	n;	

	if (s[*i] == 0)
		return (0);
	n = *i;
	while (s[n] && s[n] != '\n')
		n++;
	*line = ft_strsub(s, *i, n - *i);
	*i = n;
	if (s[*i] == '\n')
		(*i)++;
	return (1);
}

int			ft_gnl(int const fd, char **line)
{
	static char			*s = 0;
	static unsigned int	i = 0;
	int					z;

	if (fd >= 3000)
		return (-1);
	if (s == 0)
	{
		z = read_file(fd, &s);
		if (z < 1)
			return (z);
	}
	free(*line);
	return (fetch_line(line, s, &i));
}