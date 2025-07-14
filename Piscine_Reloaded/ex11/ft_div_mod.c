/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:28:01 by mmaquine          #+#    #+#             */
/*   Updated: 2025/05/30 15:36:56 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod( int a, int b, int *div, int *mod);

void	ft_div_mod( int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a - *div * b;
}
