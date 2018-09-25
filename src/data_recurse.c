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
	free(data->split);
}

static unsigned int	get_minimum_map_size(unsigned int count)
{
	unsigned int	map_size;

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
	while (data->currently_placing != data->count)
	{
		if (data_check_map_end(data) == 1)
			data_retrace(data);
		else if (data_check_if_placeable(data) == 1)
			data_place(data);
		else
			data_advance(data);
	}
	data_print(data);
}