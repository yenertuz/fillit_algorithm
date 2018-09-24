#include "fillit.h"

void	data_delete(t_data *data)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = data->count;
	if (data->split)
		free_cdp(data->split);
	if (data->tetris != 0)
		free(data->tetris);
	free(data->file);
	free(data);
}