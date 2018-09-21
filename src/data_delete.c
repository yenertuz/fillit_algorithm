#include "fillit.h"

void	data_delete(t_data *data)
{
	free(data->file);
	free(data);
}