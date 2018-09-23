#include "fillit.h"

static void	check_if_connected(char const *s, unsigned int i)
{
	if (i / 4 != 0 && s[i - 5] == '#')
		return ;
	if (i / 4 != 3 && s[i + 5] == '#')
		return ;
	if (i % 5 != 0 && s[i - 1] == '#')
		return ;
	if (i % 5 != 4 && s[i + 1] == '#')
		return ;
	ER("error: brick not connected");
}

void		tetri_process_brick(t_tetri *t, char const *s, unsigned int i)
{
	if (t->brick_count == 4)
		ER("error: too many bricks");
	t->rows[t->brick_count] = i / 5;
	t->columns[t->brick_count] = i % 5;
	check_if_connected(s, i);
	t->brick_count++;
	s+= 0;
}