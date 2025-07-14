/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:17:19 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/10 17:38:08 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("Size of str1: %d\n", ft_strlen(argv[1]));
		printf("Size of str2: %d\n", ft_strlen(argv[2]));
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	}
}*/
