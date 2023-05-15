/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:25:05 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/25 21:25:08 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		t_list *temp = (*stack_a)->next;
 		(*stack_a)->next = temp->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	write(1, "sa\n", 3);
}

void swap_b(t_list **stack_b)
{
    if (*stack_b != NULL && (*stack_b)->next != NULL)
	 {
       t_list *temp = (*stack_b)->next;
        (*stack_b)->next = temp->next;
        temp->next = *stack_b;
        *stack_b = temp;
    }
	write(1, "sb\n", 3);
}


void rra(t_list **stack_a)
{

	t_list *tmp;
	t_list *befor;

	if(stack_a && (*stack_a))
	{
		tmp = *stack_a;
		befor = NULL;
		while(tmp->next != NULL)
		{
			befor = tmp;
			tmp = tmp->next;
		}
		befor->next = NULL;
		tmp->next = *stack_a;
		(*stack_a) = tmp;
	}
	write(1, "rra\n", 4);
}
void rrb(t_list **stack_b)
{
	t_list *tmp;
	t_list *befor;
	if(stack_b&& (*stack_b))
	{
		tmp = *stack_b;
		befor = NULL;
		while(tmp->next != NULL)
		{
			befor = tmp;
			tmp = tmp->next;
		}
		befor->next = NULL;
		tmp->next = *stack_b;
		(*stack_b) = tmp;
	}
	write(1, "rrb\n", 4);
}

void ra(t_list **stack_a)
{
	t_list *tmp;

	if(stack_a && (*stack_a))
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_a,tmp);
	}

	write(1, "ra\n", 3);
}

void rb(t_list **stack_b)
{

	t_list *tmp;

	if(stack_b && (*stack_b))
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_b,tmp);
	}
	write(1, "rb\n", 3);
}

void pb(t_list **stack_a,t_list **stack_b)
{
	t_list *tmp;

	if(stack_a && (*stack_a))
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = (*stack_b);
		 (*stack_b) = tmp;


	}
	write(1, "pb\n", 3);
}

void pa(t_list **stack_a,t_list **stack_b)
{
	t_list *tmp;

	if(stack_b && (*stack_b))
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = (*stack_a);
		 (*stack_a) = tmp;


	}
		write(1, "pa\n", 3);
}
