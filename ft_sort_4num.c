/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:46:28 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/27 20:46:31 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max(t_list **stcak_a)
{
	int max = (*stcak_a)->content;

	while (*stcak_a != NULL)
	{
		if ((*stcak_a)->content > max)
		{
			max = (*stcak_a)->content;
		}
		(*stcak_a) = (*stcak_a)->next;
	}
	// printf("max == %d", max);
	return (max);
}

int ft_is_sorted(t_list **stack_a)
{
	 t_list *current;

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

void ft_fuction(t_list **stack_a)
{
	int tmp;
	int i =0 ;
	t_list *stack;

	while (i < ft_lstsize(*stack_a))
	{
		stack = *stack_a;
		while (stack->next != NULL)
		{
			if (stack->content < stack->next->content)
			{
				tmp = stack->content;
				stack->content = stack->next->content;
				stack->next->content = tmp;
			}
			stack = stack->next;
		}
		i++;
    }
}

void ft_sort_4num(t_list **stack_a, t_list **stack_b)
{
	ft_fuction(stack_a);
	ft_push_b(stack_a,stack_b);
	ft_push_b(stack_a,stack_b);
	// ft_sort_3num(stack_a);
	ft_sort_list(stack_a);
	ft_push_a(stack_a,stack_b);
	swap_ra(stack_a);
	ft_push_a(stack_a,stack_b);
	swap_ra(stack_a);
}

void ft_swap(t_list *node1, t_list *node2)
{
    int temp = node1->content;
    node1->content = node2->content;
    node2->content = temp;
}

void ft_sort_list(t_list **stack_a)
{
    t_list *cur = *stack_a;
    while (cur != NULL)
	{
        t_list *min_node = cur;
        t_list *next = cur->next;
        while (next != NULL)
		{
            if (next->content < min_node->content) {
                min_node = next;
            }
            next = next->next;
        }
        if (min_node != cur)
		{
            ft_swap(cur, min_node);
        }
        cur = cur->next;
    }
}




