/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 08:17:37 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/21 09:40:05 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{

	if (n < 0)
	{
		ft_putchar('N');
	}
	else if (n >= 0)
	{
		ft_putchar('P');
	}
}
	

