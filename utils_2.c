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
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i++]);
	}
	p = ft_split(str, ' ');
	return(p);
}
