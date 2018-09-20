#include "libft.h"

static int	get_char_from_digit(int n)
{
	if (0 <= n && n <= 9)
		return ('0' + n);
	return (0);
}

static int	get_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char		*ft_itoa(int n)
{
	char			buffer[12];
	unsigned int	i;
	unsigned int	n_copy;

	ft_memset(buffer, ' ', 11);
	buffer[11] = 0;
	n_copy = n;
	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	while (n != 0)
	{
		buffer[10 - i] = get_char_from_digit(get_abs(n % 10));
		n /= 10;
		i++;
	}
	if (n_copy < 0)
		buffer[10 - i] = '-';
	return (ft_strtrim(buffer));
}