/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:47:32 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/18 17:25:18 by abel-hid         ###   ########.fr       */
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


	if (!ft_is_sorted(stack_a))
	{
		while ((*stack_a)->index != 2)
		{

			if (get_pos_min(*stack_a) <= (ft_lstsize(*stack_a) / 2))
			{
				ra(stack_a);
			}
			else
				rra(stack_a);
		}
	}
}

void	ft_sort_4num(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 1;
	get_index(*stack_a);
	if (!ft_is_sorted(stack_a))
	{
		while ((*stack_a)->index != 1)
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

int get_pos_min(t_list *stack)
{
	t_list *tmp;
	tmp = stack;

	int min = tmp->content;

	int i = 0;

	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}

	while (stack)
	{
		if (stack->content == min)
			return(i);
		stack = stack->next;
		i++;
	}
	return (0);
}

void	ft_sort_5num(t_list **stack_a, t_list **stack_b)
{
	get_index(*stack_a);
	if (!ft_is_sorted(stack_a))
	{
		while ((*stack_a)->index != 1)
		{

			if (get_pos_min(*stack_a) <= (ft_lstsize(*stack_a) / 2))
			{
				ra(stack_a);
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
