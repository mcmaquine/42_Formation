/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:39:06 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/13 22:43:22 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	sig;

	if (n >= 0)
		sig = 'P';
	else
		sig = 'N';
	ft_putchar(&sig);
}
