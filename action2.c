/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 06:07:53 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/15 06:07:55 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "rb\n", 3);
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
	write(1, "pb\n", 3);
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
	write(1, "pa\n", 3);
}
