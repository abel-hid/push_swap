/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:48:35 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 02:21:22 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_addargs(char *av[])
{
	char	*str;
	char	**p;
	char	*tmp;
	int		i;

	i = 1;
	str = ft_strdup("");
	while (av[i])
	{
		if (!ft_strcmp(av[i], ""))
			ft_error();
		if (!ft_strcmp(av[i], "-") || !ft_strcmp(av[i], "+"))
			ft_error();
		tmp = ft_strjoin(str, " ");
		free(str);
		str = ft_strjoin(tmp, av[i]);
		free(tmp);
		i++;
	}
	p = ft_split(str, ' ');
	free(str);
	return (p);
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	if (!(s1[i] || s2[i]))
		return (0);
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
