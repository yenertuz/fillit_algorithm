#include "fillit.h"

t_data	*data_new(char const *p)
{
	t_data	*new;

	new = MEMALLOC(t_data, 1);
	new->file = ft_readfile(p);
	new->len = ft_strlen(new->file);
	return (new);
}