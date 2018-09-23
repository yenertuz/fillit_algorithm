#include "libft.h"

void	free_cdp(char **dp)
{
	char	**ptr;

	ptr = dp;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(dp);
}