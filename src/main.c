#include "fillit.h"

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac != 2 || ft_strlen(av[1]) == 0)
		ER("error: bad argument");
	data = data_new(av[1]);
	data_solve(data);
	data_delete(data);
	return (0);
}