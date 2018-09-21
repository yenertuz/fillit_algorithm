#include "fillit.h"

t_data	*data_new(char const *p)
{
	t_data			*data;

	data = MEMALLOC(t_data, 1);
	data->file = ft_readfile(p);
	data->len = ft_strlen(data->file);
	if (data->len > 545)
		ft_error("error: file too big");
	data_analyze(data);
	/*
	data_index(data);
	*/
	return (data);
}