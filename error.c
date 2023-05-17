/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:47:15 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/17 18:31:21 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(void)
{
	write(1, "Error\n", 6);
	exit (1);
}

int	ft_is_overflow(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_atoi(str[i]) >= 2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	is_not_num(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+' )
			j++;
			if(!ft_strcmp(str[i], "+") || !ft_strcmp(str[i], "-"))
				return (1);
		while (str[i][j])
		{
			if (!(ft_isdigit(str[i][j])))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


int	ft_is_double(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_create(t_list **stack_a, char *av[])
{
	int	i;

	i = 0;
	av = ft_addargs(av);

	if (is_not_num(av))
		return (ft_error());
	if (ft_is_double(av))
		return (ft_error());
	if (ft_is_overflow(av))
		return (ft_error());
	while (av[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	ft_free(av);
	return (0);
}
