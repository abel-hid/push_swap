/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 03:10:43 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 03:12:28 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
}

void	sb(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = tmp->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
}

void	rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*befor;

	if (stack_a && (*stack_a))
	{
		tmp = *stack_a;
		befor = NULL;
		while (tmp->next != NULL)
		{
			befor = tmp;
			tmp = tmp->next;
		}
		befor->next = NULL;
		tmp->next = *stack_a;
		(*stack_a) = tmp;
	}
}

void	rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*befor;

	if (stack_b && (*stack_b))
	{
		tmp = *stack_b;
		befor = NULL;
		while (tmp->next != NULL)
		{
			befor = tmp;
			tmp = tmp->next;
		}
		befor->next = NULL;
		tmp->next = *stack_b;
		(*stack_b) = tmp;
	}
}

void	ra(t_list **stack_a)
{
	t_list	*tmp;

	if (stack_a && (*stack_a))
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_a, tmp);
	}
}
