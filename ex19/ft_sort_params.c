/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 19:15:37 by carmand           #+#    #+#             */
/*   Updated: 2016/11/21 23:46:30 by carmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

void	sort(int a, char **v)
{
	int i;
	int j;

	i = 1;
	while (i != a - 1)
	{
		j = ft_strcmp(v[i], v[i + 1]);
		if (j > 0)
		{
			v[0] = v[i];
			v[i] = v[i + 1];
			v[i + 1] = v[0];
			i = 0;
		}
		i++;
	}
}

int		main(int a, char **v)
{
	int i;

	if (a > 2)
		sort(a, v);
	i = 1;
	while (i < a)
	{
		ft_putstr(v[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
