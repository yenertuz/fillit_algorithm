#include "fillit.h"


static void	trim_tetrimino(t_tetri *t)
{
	int				row_min;
	int				column_min;
	unsigned int	i;

	i = 0;
	row_min = t->rows[0];
	column_min = t->columns[0];
	while (i < 4)
	{
		t->rows[i] -= row_min;
		t->columns[i] -= column_min;
		i++;
	}
}

void		data_trim_tetriminos(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	t_tetri			*ptr;

	i = 0;
	l = data->count;
	ptr = data->tetris;
	while (i < l)
	{
		trim_tetrimino(ptr + i);
		i++;
	}
}