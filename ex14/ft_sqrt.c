/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:36:46 by ttresori          #+#    #+#             */
/*   Updated: 2016/11/21 18:28:53 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while ((i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}