/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:39:09 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/27 19:39:12 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ft(t_list **stack_a)
{
	if	((*stack_a)->content > (*stack_a)->next->content
	&& (*stack_a)->next->content < (*stack_a)->next->next->content)
	{
		if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content < (*stack_a)->next->next->content
		 && (*stack_a)->content <  (*stack_a)->next->next->content)
		{
			swap_a(stack_a);
			return ;
		}
		swap_ra(stack_a);
		return ;
	}
}

void ft(t_list **stack_a)
{
	if ((*stack_a)->content < (*stack_a)->next->content
	&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		swap_rra(stack_a);
		if (((*stack_a)->content > (*stack_a)->next->content)
		&& (*stack_a)->next->content < (*stack_a)->next->next->content)
		{
			swap_a(stack_a);
		}
	}
}

void ft_sort_3num(t_list **stack_a)
{
	ft(stack_a);
	ft_ft(stack_a);

	if (((*stack_a)->content > (*stack_a)->next->content)
	&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		swap_a(stack_a);
		swap_rra(stack_a);
	}
}

