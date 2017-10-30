/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <ttresori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:22:26 by ttresori          #+#    #+#             */
/*   Updated: 2016/11/20 18:05:26 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a != 'z' + 1)
	{
		ft_putchar(a);
		a++;
	}
}
