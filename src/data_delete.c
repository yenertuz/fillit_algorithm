#include "fillit.h"

void	data_delete(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	char			**ptr;

	i = 0;
	l = data->count;
	ptr = data->split;
	if (data->split)
	{
		while (i < l)
		{
			free(ptr[i]);
			i++;
		}
	}
	free(data->split);
	if (data->tetris != 0)
		free(data->tetris);
	free(data->file);
	free(data);
}