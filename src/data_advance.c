#include "fillit.h"

void	data_advance(t_data *data)
{
	data->map_column++;
	if (data->map_column == data->map_size &&
		data->map_row != data->map_size - 1)
	{
		data->map_row++;
		data->map_column = 0;
	}
}