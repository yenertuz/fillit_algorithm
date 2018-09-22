#include "fillit.h"

void	data_solve(t_data *data)
{
	unsigned int	i;
	unsigned int	l;
	unsigned int	n;

	i = 0;
	l = data->tetri_count;
	while (i < l)
	{
		PS("TETRI #"); PN(i); PE(" __@@");
		n = 0;
		while (n < 4)
		{
		PS("BRICK "); PN(n); PS(": "); PN((data->tetris[i]).rows[n]); PC(':'); PN((data->tetris[i]).columns[n]); NL;
		n++;
		}
		PS(data->tetris[i].buffer); NL;
		i++;
	}
}

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac != 2)
		ft_error("error: invalid usage");
	data = data_new(av[1]);
	free(data);
	return (0);
}