#include "fillit.h"


static char	*get_tetri_by_index(char const *s, unsigned int i)
{
	char	*r;

	r = ft_strnew(20);
	ft_strncpy(r, s + 21 * i, 20);
	return (r);
}

void		data_split_tetriminos(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	char			**ptr;
	char const		*s;

	i = 0;
	l = data->count;
	s = data->file;
	data->split = MALLOC(char*, data->count);
	ptr = data->split;
	while (i < l)
	{
		ptr[i] = get_tetri_by_index(s, i);
		i++;
	}
}