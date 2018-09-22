#include "fillit.h"

static void	tetri_process_newline(unsigned int i)
{
	if (i % 5 != 4)
		ft_error("error: bad intra-tetri newline");
}

static void	tetri_index(t_tetri *tetri)
{
	char			*s;
	unsigned int	i;
	char			c;

	if (ft_strlen(tetri->buffer) != 20)
	{
		PN(tetri->index); NL;
		ft_error("error: strlen");
	}
	s = tetri->buffer;
	i = 0;
	while (s[i])
	{
		c = s[i];
		if (c == '\n')
			tetri_process_newline(i);
		else if (c == '#')
			tetri_process_brick(tetri, s, i);
		else if (c != '.')
			ft_error("error: bad character");
		i++;
	}
}

void		data_index(t_data *data)
{
	unsigned int	i;
	unsigned int	tetri_count;
	t_tetri			*tetri;

	i = 0;
	tetri_count = data->tetri_count;
	while (i < tetri_count)
	{
		tetri = tetri_from_index(data, i);
		PN(i); PS("--@"); NL;
		tetri_index(tetri);
		i++;
	}
}