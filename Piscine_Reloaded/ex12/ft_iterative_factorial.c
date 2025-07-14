/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:44:42 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/13 22:53:56 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}
