/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:30:50 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/21 08:16:07 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void  ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers(void)	
{
	char number;

	number ='0';
	while(number <= '9')
	{
		ft_putchar(number);
		number++;
	}

}

