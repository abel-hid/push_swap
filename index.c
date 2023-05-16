/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:46:13 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 02:08:34 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min(t_list **stack_a)
{
	t_list	*tmp;
	int		min;

	tmp = *stack_a;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min && tmp->index == -1)
		{
			min = tmp->content;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	reset_all(t_list **stack_a)
{
	t_list	*tmp;

	tmp = (*stack_a);
	while (tmp)
	{
		tmp->index = -1;
		tmp = tmp->next;
	}
}

void	get_index(t_list *stack_a)
{
	int		new_index;
	int		min;
	t_list	*tmp;

	new_index = 1;
	tmp = stack_a;
	reset_all(&stack_a);
	while (stack_a)
	{
		min = ft_get_min(&tmp);
		if (tmp->content == min && tmp->index == -1)
				tmp->index = new_index++;
			min = ft_get_min(&stack_a);
		if (stack_a->content == min && stack_a->index == -1)
		{
			stack_a->index = new_index++;
			stack_a = tmp;
		}
		stack_a = stack_a->next;
	}
}

void	index_all(t_list **stack_a, t_list **stack_b)
{
	int	chunk;
	int	j;
	int	a;

	if (ft_lstsize(*stack_a) == 500)
		chunk = ft_lstsize(*stack_a) / 9;
	else
		chunk = ft_lstsize(*stack_a) / 5;
	a = chunk;
	j = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= a)
		{
			pb(stack_a, stack_b);
				j++;
			if ((*stack_b)->index > (a - (chunk / 2)))
				rb(stack_b);
			if (a == j)
				a += chunk;
		}
		else
			ra(stack_a);
	}
}
