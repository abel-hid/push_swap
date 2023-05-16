/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:47:32 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 01:47:39 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list **stack_a)
{
	t_list	*tmp;
	int		min;

	tmp = *stack_a;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	ft_is_sorted(t_list **stack_a)
{
	t_list	*current;

	current = (*stack_a);
	while (current->next != NULL)
	{
		if (current->content > current->next->content)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

void	check_min(t_list **stack_a)
{
	int	min;
	int	i;

	i = 1;
	min = get_min(stack_a);
	while ((*stack_a)->content != min)
	{
		i++;
		if (i <= 2)
		{
			sa(stack_a);
		}
		else
			rra(stack_a);
	}
}

void	ft_sort_4num(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	i;

	i = 1;
	min = get_min(stack_a);
	if (!ft_is_sorted(stack_a))
	{
		while ((*stack_a)->content != min)
		{
			i++;
			if (i <= 2)
			{
				ra(stack_a);
			}
			else
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		ft_sort_3num(stack_a);
		pa(stack_a, stack_b);
	}
}

void	ft_sort_5num(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	i;

	i = 1;
	min = get_min(stack_a);
	if (!ft_is_sorted(stack_a))
	{
		while ((*stack_a)->content != min)
		{
			i++;
			if (i <= 2)
			{
				sa(stack_a);
			}
			else
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		check_min(stack_a);
		pb(stack_a, stack_b);
		ft_sort_3num(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
