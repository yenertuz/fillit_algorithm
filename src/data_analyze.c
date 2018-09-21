#include "fillit.h"

static void	check_newlines(t_data *data)
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

void		data_analyze(t_data *data)
{
	check_newlines(data);

}