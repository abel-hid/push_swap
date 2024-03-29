/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:47:27 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 02:21:42 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_help2(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content < (*stack_a)->next->next->content)
	{
		if ((*stack_a)->content > (*stack_a)->next->content
			&& (*stack_a)->next->content < (*stack_a)->next->next->content
			&& (*stack_a)->content < (*stack_a)->next->next->content)
		{
			sa(stack_a);
			return ;
		}
		ra(stack_a);
		return ;
	}
}

void	ft_help(t_list **stack_a)
{
	if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		rra(stack_a);
		if (((*stack_a)->content > (*stack_a)->next->content)
			&& (*stack_a)->next->content < (*stack_a)->next->next->content)
		{
			sa(stack_a);
		}
	}
}

void	ft_sort_3num(t_list **stack_a)
{
	ft_help(stack_a);
	ft_help2(stack_a);
	if (((*stack_a)->content > (*stack_a)->next->content)
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
}
