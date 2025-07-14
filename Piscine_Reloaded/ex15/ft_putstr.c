/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:01:50 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/13 23:03:36 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(str);
		str++;
	}
}
