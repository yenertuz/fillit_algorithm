#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef struct		s_tetri
{
	unsigned int	rows[4];
	unsigned int	columns[4];
	unsigned int	width;
	unsigned int	height;
	unsigned int	block_count;
}					t_tetri;

typedef struct		s_data
{
	unsigned int	tetri_count;
	t_tetri			tetris[26];
}					t_data;

void				analyze_file(char *s);


#endif