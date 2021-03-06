/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:22:46 by ttresori          #+#    #+#             */
/*   Updated: 2016/11/21 16:42:34 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			length++;
		}
		i++;
	}
	return (length);
}
