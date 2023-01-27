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

void swap_a(t_list **stack_a)
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



void swap_rra(t_list **stack_a)
{
	t_list *p;

	ft_lstadd_front(stack_a,ft_lstnew(ft_lstlast(*stack_a)->content));
	p = (*stack_a);
	delete_last_node(&p);

	write(1, "rra\n", 4);
}






void swap_ra(t_list **stack_a)
{

	ft_lstadd_back(stack_a,ft_lstnew((*stack_a)->content));
	(*stack_a) = (*stack_a)->next;
	write(1, "ra\n", 3);
}

void swap_rb(t_list **stack_b)
{

	ft_lstadd_back(stack_b,ft_lstnew((*stack_b)->content));
	(*stack_b) = (*stack_b)->next;
	write(1, "rb\n", 3);
}


