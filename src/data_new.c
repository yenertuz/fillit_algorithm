#include "fillit.h"

static void	check_newlines(char const *s, unsigned int l)
{
	unsigned int	i;

	i = 20;
	while (i < l)
	{
		if (s[i] != '\n')
			ft_error("error: bad inter-tetri newline");
		i += 21;
	}
}

t_data		*data_new(char const *p)
{
	char			*file;
	unsigned int	i;
	unsigned int	l;
	t_data			*data;

	file = ft_readfile(p);
	data = MEMALLOC(t_data, 1);
	i = 0;
	l = ft_strlen(file);
	check_newlines(file, l);
	data_fetch(data, file, l);
	data_index(data);
	return (data);
}