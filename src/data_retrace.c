#include "fillit.h"

static void	erase_last_placed(t_data *data)
{
	t_tetri	*last_placed;
	char	**map;
	int		n[3];

	last_placed = data->tetris + data->currently_placing - 1;
	map = data->split;
	n[0] = 0;
	while (n[0] < 4)
	{
		n[1] = last_placed->placed_row + last_placed->rows[n[0]];
		n[2] = last_placed->placed_column + last_placed->columns[n[0]];
		map[n[1]][n[2]] = '.';
		n[0]++;
	}
}

static void	expand_map(t_data *data)
{
	data->map_row = 0;
	data->map_column = 0;
	data->map_size++;
	data_draw_maps(data);
}

void		data_retrace(t_data *data)
{
	if (data->currently_placing == 0)
		expand_map(data);
	else
		erase_last_placed(data);
}