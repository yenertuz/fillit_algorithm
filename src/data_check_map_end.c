#include "fillit.h"

int	data_check_map_end(t_data *data)
{
	if (data->split[data->map_row][data->map_column] == 0)
		return (1);
	else
		return (0);
}