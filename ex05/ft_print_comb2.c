/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:57:28 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/21 14:23:33 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void ft_print_comb2(void)
{
	int x;
	int y;
	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while(y <= 99)
		{
			ft_putchar(x/10 + '0');
			ft_putchar(y%10 + '0');
			ft_putchar(' ');
			ft_putchar(x/10 + '0');
			ft_putchar(y/10 + '0');
			ft_putchar(',');
			ft_putchar(' ');
			y++;

		}
	}
}
