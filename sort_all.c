/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:48:25 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 02:20:18 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position(t_list *stack_b, int index)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->index != index)
			i++;
		else
			break ;
			stack_b = stack_b->next;
	}
	return (i);
}

int	get_num_action(t_list *stack_b, int pos)
{
	int	half;
	int	i;

	half = ft_lstsize(stack_b) / 2;
	if (pos <= half)
		i = pos;
	else
		i = (ft_lstsize(stack_b) - pos);
	return (i);
}

void	helper(int instruction, int position, t_list **stack_b)
{
	if (position <= ft_lstsize(*stack_b) / 2)
	{
		while (instruction--)
			rb(stack_b);
	}
	else
	{
		while (instruction--)
			rrb(stack_b);
	}
}

void	push(int instruction, int position, t_list **stack_a, t_list **stack_b)
{
	helper(instruction, position, stack_b);
	pa(stack_a, stack_b);
}

void	sort_all_num(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	befor_max;
	int	max_instruction;
	int	b;

	index_all(stack_a, stack_b);
	while (*stack_b)
	{
		max = position(*stack_b, ft_lstsize(*stack_b));
		befor_max = position(*stack_b, ft_lstsize(*stack_b) - 1);
		max_instruction = get_num_action(*stack_b, max);
		b = get_num_action(*stack_b, befor_max);
		if (max_instruction > b)
		{
			push(b, befor_max, stack_a, stack_b);
			get_index(*stack_b);
			max = position(*stack_b, ft_lstsize(*stack_b));
			max_instruction = get_num_action(*stack_b, max);
			push(max_instruction, max, stack_a, stack_b);
			sa(stack_a);
		}
		else
			push(max_instruction, max, stack_a, stack_b);
	}
}
