/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:43:16 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/14 15:43:19 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_print_file(char *filename);
void	ft_putstr(char *str, int fd);

void	ft_print_file(char *filename)
{
	int		bytes_read;
	char	c;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		bytes_read = read(fd, &c, 1);
		while (bytes_read > 0)
		{
			write(1, &c, 1);
			bytes_read = read(fd, &c, 1);
		}
		close(fd);
	}
}

void	ft_putstr(char *str, int fd)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2);
	else
		ft_print_file(argv[1]);
}
