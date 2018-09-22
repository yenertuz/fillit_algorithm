#include "fillit.h"

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac != 2)
		ft_error("error: invalid usage");
	data = data_new(av[1]);
	data_solve(data);
	delete_data(data);
	return (0);
}