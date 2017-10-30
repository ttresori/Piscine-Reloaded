/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 23:40:48 by carmand           #+#    #+#             */
/*   Updated: 2016/11/22 20:10:06 by carmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int a, char **v)
{
	int		fd;
	char	c[0];

	if (a == 1)
		write(2, "File name missing.\n", 19);
	else if (a > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(v[1], O_RDONLY);
		if (fd == -1)
			return (0);
		while (read(fd, c, 1))
			write(1, &c, 1);
	}
	return (0);
}
