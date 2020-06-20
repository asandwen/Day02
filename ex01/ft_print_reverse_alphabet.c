/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:06:51 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/20 10:32:06 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}



