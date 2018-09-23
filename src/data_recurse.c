#include "fillit.h"

static void			free_tetri_strings(t_data *data)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = data->count;
	while (i < l)
	{
		free((data->split)[i]);
		i++;
	}
}

static unsigned int	get_minimum_map_size(unsigned int count)
{
	unsigned int	tetri_count;

	map_size = 1;
	while (map_size * map_size < count)
		map_size++;
	return (map_size * 2);
}

void				data_recurse(t_data *data)
{
	free_tetri_strings(data);
	data->split = 0;
	data->map_size = get_minimum_map_size(data->count);
	data_draw_maps(data);
	
}