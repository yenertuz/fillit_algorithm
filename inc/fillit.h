#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef struct		s_tetri
{
	unsigned int	index;
	unsigned int	rows[4];
	unsigned int	columns[4];
	unsigned int	brick_count;
	char			buffer[20];
}					t_tetri;

typedef struct		s_data
{
	t_tetri			tetris[26];
	unsigned int	tetri_count;
}					t_data;

t_data				*data_new(char const *path);
void				data_fetch(t_data *data, const char *file, unsigned int l);

t_tetri				*tetri_get_last(t_data *data);
t_tetri				*tetri_from_index(t_data *data, unsigned int i);
void				tetri_process_brick(t_tetri tetri, char const *s,
						unsigned int i);


void				data_solve(t_data *data);


#endif