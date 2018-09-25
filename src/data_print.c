#include "fillit.h"

void	data_print(t_data *data)
{
	char	**map;

	map = data->split;
	while (*map != 0)
	{
		PE(*map);
		map++;
	}
}