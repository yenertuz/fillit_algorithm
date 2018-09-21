#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef struct		s_tetri
{
	unsigned int	rows[4];
	unsigned int	columns[4];
	unsigned int	brick_count;
	unsigned int	width;
	unsigned int	length;
}					t_tetri;

typedef struct		s_data
{
	char			*file;
	unsigned int	len;
	t_tetri			tetris[26];
	unsigned int	tetri_count;
}					t_data;

t_data				*data_new(char const *p);
void				data_delete(t_data *data);
void				data_analyze(t_data *data);

#endif