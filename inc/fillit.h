#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef struct		s_tetri
{
	int				rows[4];
	int				columns[4];
	unsigned int	brick_count;
	unsigned int	index;
	int				placed_row;
	int				placed_column;
}					t_tetri;

typedef struct		s_data
{
	char			*file;
	unsigned int	len;
	unsigned int	count;
	char			**split;
	t_tetri			*tetris;
	unsigned int	map_size;
	int				success;
	unsigned int	currently_placing;
	unsigned int	map_row;
	unsigned int	map_column;
}					t_data;

t_data				*data_new(char const *p);
void				data_delete(t_data *data);

void				data_solve(t_data *data);
void				data_split_tetriminos(t_data *data);
void				data_process_tetriminos(t_data *data);
void				data_trim_tetriminos(t_data *data);
void				data_recurse(t_data *data);
void				data_draw_maps(t_data *data);

int					data_check_map_end(t_data *data);
int					data_check_if_placeable(t_data *data);
void				data_place(t_data *data);
void				data_fail(t_data *data);
void				data_retrace(t_data *data);
void				data_advanced(t_data *data);

void				tetri_process_brick(t_tetri *t, char const *s,
						unsigned int i);

#endif