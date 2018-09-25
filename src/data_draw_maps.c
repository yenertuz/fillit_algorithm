#include "fillit.h"

static char	*generate_string(unsigned int map_size)
{
	unsigned int	i;
	char			*r;
	unsigned int	l;

	l = (map_size + 1) * map_size;
	r = ft_strnew(l);
	i = 0;
	while (i < l)
	{
		if (i % (map_size + 1) == map_size)
		{
			r[i] = '\n';
		}
		else
			r[i] = '.';
		i++;
	}
	return (r);
}

void		data_draw_maps(t_data *data)
{
	char	*s;

	if (data->split != 0)
	{
		free_cdp(data->split);
		data->split = 0;
	}
	s = generate_string(data->map_size);
	data->split = ft_strsplit(s, '\n');
	free(s);
}