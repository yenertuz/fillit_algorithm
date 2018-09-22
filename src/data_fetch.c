#include "fillit.h"

static void	data_write_tetri(t_data *data, char const *p, 
				unsigned int i)
{
	t_tetri	*tetri;

	tetri = tetri_get_last(data);
	tetri->index = data->tetri_count;
	data->tetri_count++;
	ft_strncpy(tetri->buffer, p + i, 20);
}

void		data_fetch(t_data *data, char const *p, unsigned int l)
{
	unsigned int	i;

	i = 0;
	while (i < l)
	{
		data_write_tetri(data, p, i);
		(data->tetri_count)++;
		i += 21;
	}
	data_solve(data);
}