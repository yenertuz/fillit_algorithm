#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef struct		t_data
{
	char			*file;
	unsigned int	len;
	t_tetri			*tetris[26];
	unsigned int	tetri_count;
}

#endif