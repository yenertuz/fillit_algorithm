#include "fillit.h"

static void		check_newlines(char const *s)
{
	if (s[4] != '\n' || s[9] != '\n' || s[14] != '\n' || s[19] != '\n')
		ER("error: bad intra tetri newline");
}

/*
**	i[0] => i;
**	i[1] => l;
*/

static t_tetri	process_single_tetrimino(t_data *data, 
					unsigned int i)
{
	char const		*s;
	unsigned int	n[2];
	t_tetri			r;

	s = (data->split)[i];
	check_newlines(s);
	ft_bzero(n, sizeof(unsigned int) * 2);
	ft_bzero(&r, sizeof(t_tetri));
	r.index = i;
	n[1] = 20;
	while (n[0] < n[1])
	{
		if (n[0] % 5 != 4)
		{
			if (s[n[0]] == '#')
				tetri_process_brick(&r, s, n[0]);
			else if (s[n[0]] != '.')
				ft_error("error: bad character");
		}
		(n[0])++;
	}
	if (r.brick_count != 4)
		ER("error: bad brick count");
	return (r);
}

void			data_process_tetriminos(t_data *data)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = data->count;
	data->tetris = MEMALLOC(t_tetri, l);
	while (i < l)
	{
		(data->tetris)[i] = process_single_tetrimino(data, i);
		i++;
	}
}