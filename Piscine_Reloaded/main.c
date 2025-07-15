#include <stdio.h>
#include <stdlib.h>
#include "ex26/ft_count_if.c"

int	is_even(char *n)
{
	if (*n % 2 ==  0)
		return (1);
	else
		return (0);
}

int	main()
{
	char	ar[] = {1, 2, 3, 4, 5, 6, 7, 0};
	char	**arr;
	int		i;

	arr = (char **)malloc(8 * sizeof(char *));
	i = 0;
	while (i < 8)
	{
		arr[i] = &ar[i];
		i++;
	}
	printf("%d\n", ft_count_if(arr, &is_even));
}
