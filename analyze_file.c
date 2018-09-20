#include "fillit.h"

void	analyze_file(char *s)
{
	unsigned int	l;
	unsigned int	tetrimino_count;

	tetrimino_count = 0;
	l = ft_strlen(s);
	while (l >= 20)
	{
		PS("# 20 CHARS"); NL;
		write(1, s, 20); PC('@'); NL;
		s += 20;
		l -= 20;
		PS("# NEXT CHAR IS: ");
		PC('#'); PC(*s); PC('#'); NL;
		if (*s == '\n')
			l--;
		s++;
		PS("# REMAINING L: "); PN(l); NL;
	}
}