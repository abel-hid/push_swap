/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_bonus2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 03:14:24 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 03:15:36 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


void	rb(t_list **stack_b)
{
	t_list	*tmp;

	if (stack_b && (*stack_b))
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_b, tmp);
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (stack_a && (*stack_a))
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = (*stack_b);
		(*stack_b) = tmp;
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (stack_b && (*stack_b))
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
	}
}
