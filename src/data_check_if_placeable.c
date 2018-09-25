#include "fillit.h"

int	data_check_if_placeable(t_data *data)
{
	t_tetri			*tetri;
	char 			**map;
	unsigned int	i;
	int				n[3];

	tetri = data->tetris + data->currently_placing;
	map = data->split;
	i = 0;
	n[2] = data->map_size;
	while (i < 4)
	{
		n[0] = data->map_row + tetri->rows[i];
		n[1] = data->map_column + tetri->columns[i];
		if (n[0] < 0 || n[0] >= n[2] || n[1] < 0 || n[1] >= n[2])
			return (0);
		if (map[n[0]][n[1]] != '.')
			return (0);
		i++;
	}
	return (1);
}