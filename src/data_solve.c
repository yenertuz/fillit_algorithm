#include "fillit.h"

static void	check_length(t_data *data)
{
	if (data->len > 545)
		ER("error: file too big");
	if (data->len % 21 != 20)
		ER("error: bad tetri length");
}

static void	check_inter_newlines(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	char const		*s;

	l = data->len;
	i = 20;
	s = data->file;
	while (i < l)
	{
		if (s[i] != '\n')
			ER("error: bad inter-tetri newline");
		i += 21;
	}
}

static void	count_tetriminos(t_data *data)
{
	data->count = (data->len + 1) / 21;
}

void		data_solve(t_data *data)
{
	check_length(data);
	check_inter_newlines(data);
	count_tetriminos(data);
	data_split_tetriminos(data);
	data_process_tetriminos(data);
	data_trim_tetriminos(data);
	data_recurse(data);
}