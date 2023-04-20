/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:27:22 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/25 21:27:24 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **ft_addargs(char *av[])
{
	char	*str;
	char	**p;
	int		i;

	i = 1;
	str = ft_strdup(" ");
	while (av[i])
	{
		if(!strcmp(av[i],""))
			ft_error();
		if(!strcmp(av[i],"-") || !strcmp(av[i],"+"))
			ft_error();
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	p = ft_split(str, ' ');
	return(p);
}

int	ft_strcmp(const char *s1, const char *s2)
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

