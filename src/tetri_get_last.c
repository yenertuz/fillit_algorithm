#include "fillit.h"

t_tetri	*tetri_get_last(t_data *data)
{
	t_tetri	*tetri;

	if (data->tetri_count == 26)
		ft_error("error: too many tetriminos");
	tetri = &(data->tetris[data->tetri_count]);
	return (tetri);
}