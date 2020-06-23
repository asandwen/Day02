/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:59:29 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/23 15:34:54 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void ft_putnbr(int nb)
{ 
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb/10 >0)
	{
		ft_putnbr(nb/10);
	}
	ft_putchar(nb%10 + '0');
}

	
