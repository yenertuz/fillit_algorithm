#include "fillit.h"

static void	check_for_connections(char const *s, unsigned int i)
{
	if (i % 5 != 0 && s[i - 1] == '#')
		return ;
	if (i % 5 != 4 && s[i + 1] == '#')
		return ;
	if (i / 5 != 0 && s[i - 5] == '#')
		return ;
	if (i / 5 != 3 && s[i + 5] == '#')
		return ;
	ft_error("error: brick not connected");
}

void		tetri_process_brick(t_tetri *tetri, char const *s, unsigned int i)
{
	if (i % 5 == 4)
		ft_error("error: misplaced brick");
	if (tetri->brick_count == 4)
		ft_error("error: too many bricks");
	check_for_connections(s, i);
	tetri->rows[tetri->brick_count] = i / 5;
	tetri->columns[tetri->brick_count] = i % 5;
}