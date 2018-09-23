#include "fillit.h"

static void	trim_columns(t_tetri *t)
{
	unsigned int	i;
	unsigned int	min;

	min = 5;
	i = 0;
	while (i < 4)
	{
		if (t->columns[i] < min)
			min = t->columns[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		t->columns[i] -= min;
		i++;
	}
	PS("trimmed columns by "); PN(min); NL;
}

static void	trim_rows(t_tetri *t)
{
	unsigned int	i;
	unsigned int	min;

	min = 5;
	i = 0;
	while (i < 4)
	{
		if (t->rows[i] < min)
			min = t->rows[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		t->rows[i] -= min;
		i++;
	}
	PS("trimmed rows by "); PN(min); NL;
}

static void	trim_tetrimino(t_tetri *t)
{
	trim_rows(t);
	trim_columns(t);
}

void		data_trim_tetriminos(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	t_tetri			*ptr;

	i = 0;
	l = data->count;
	ptr = data->tetris;
	PE("----------> TRIMMING TETRIMINOS");
	while (i < l)
	{
		PS("Trimming tetri #"); PN(i); PE("\n{");
		trim_tetrimino(ptr + i);
		PE("\n");
		i++;
	}
	PE("----------> DONE TRIMMING TETRIMINOS");
}