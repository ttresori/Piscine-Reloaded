/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:39:28 by ttresori          #+#    #+#             */
/*   Updated: 2016/11/20 19:40:28 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*table;

	i = 0;
	if (min >= max)
		return (0);
	table = (int*)malloc(sizeof(*table) * (max - min));
	while (min < max)
	{
		table[i] = min;
		i++;
		min++;
	}
	return (table);
}
