#include "fillit.h"

void	data_place(t_data *data)
{
	t_tetri			*tetri;
	char			**map;
	unsigned int	n[3];

	tetri = data->tetris + data->currently_placing;
	tetri->placed_row = data->map_row;
	tetri->placed_column = data->map_column;
	map = data->split;
	n[0] = 0;
	while (n[0] < 4)
	{
		n[1] = tetri->placed_row + tetri->rows[n[0]];
		n[2] = tetri->placed_column + tetri->columns[n[0]];
		map[n[1]][n[2]] = 'A' + tetri->index;
		n[0]++;
	}
	data->currently_placing++;
	data->map_row = 0;
	data->map_column = 0;
}