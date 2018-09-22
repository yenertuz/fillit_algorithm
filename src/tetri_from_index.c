#include "fillit.h"

t_tetri	*tetri_from_index(t_data *data, unsigned int i)
{
	t_tetri	*ptr;

	ptr = &((data->tetris)[i]);
	return (ptr);
}