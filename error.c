/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:25:22 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/25 21:25:25 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_error(void)
{
	write(1, "Error\n",6);
	return (0);
}

int ft_is_overflow(char **str)
{
	int  i;
	i = 1;

	while(str[i])
	{
		if((ft_atoi(str[i]) >  INT_MAX))
			return(1);
		i++;
	}
	return(0);
}

int is_not_num(char **str)
{
	int i = 1;
	int j;


    while (str[i])
	{
		j = 0;
		if (str[i][j] == '-')
			j++;
		while (str[i][j])
		{
			if (!(ft_isdigit(str[i][j])))
				return (1);
			j++;
		}
       i++;
    }
    return 0;
}

int ft_is_double(char **str)
{
	int i;
	int j;
	i = 1;
	while(str[i] != '\0')
	{
		j = i + 1;
		while(str[j] != '\0')
		{
			if(ft_atoi(str[i]) == ft_atoi(str[j]))
				return(1);
			j++;
		}
		i++;
	}
	return 0;
}

int ft_noting(t_list **stack_a, char *av[])
{
	int i = 1;

	if(is_not_num(av))
	{
		// printf("1");
		return(ft_error());
	}
	if(ft_is_double(av))
	{
		// printf("2");
		return(ft_error());
	}

	if(ft_is_overflow(av))
	{
		// printf("3");
		return(ft_error());
	}

	while(av[i] != '\0' )
	{
		ft_lstadd_back(stack_a,ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (0);
}
