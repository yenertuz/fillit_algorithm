#include "fillit.h"

int	data_check_map_end(t_data *data)
{
	if (data->map_row == data->map_size - 1 && data->map_column == 
		data->map_size)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}