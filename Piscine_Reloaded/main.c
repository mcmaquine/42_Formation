#include <stdio.h>
#include <stdlib.h>
#include "ex26/ft_count_if.c"

int	is_pos(char *n)
{
	if (*n > 0)
		return (1);
	else
		return (0);
}

int	main()
{
	char	ar[] = {-1, 0, 3, -6, -4, -2, 5};

	printf("%d\n", ft_count_if(&ar, 7, is_pos));
}