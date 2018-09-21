#include "fillit.h"

static void		check_newlines(t_data *data)
{
	char const		*s;
	unsigned int	l;
	unsigned int	i;

	s = data->file;
	l = data->len;
	i = 20;
	while (i < l)
	{
		if (s[i] != '\n')
			ft_error("error: post-tetri newline");
		i += 20;
	}
}

static void		data_write_tetri(t_data *data, char const *s)
{
	if (data->tetri_count == 26)
		ft_error("error: too many tetriminos");
	((data->tetris)[data->tetri_count].tetri) = s;
	data->tetri_count++;
}

static void		list_tetris(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	char const		*s;

	i = 0;
	l = data->len;
	s = data->file;
	while (i < l)
	{
		data_write_tetri(ft_strsub(s, i, 20));
		i += 21;
	}
}

void			data_analyze(t_data *data)
{
	check_newlines(data);
	list_tetris(data);
	data_index(data);
}