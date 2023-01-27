#include "push_swap.h"


void ft_sort_3num(t_list **stack_a)
{
	if(((*stack_a)->content < (*stack_a)->next->content)
	&&(*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		swap_rra(stack_a);
		if(((*stack_a)->content > (*stack_a)->next->content) &&
		(*stack_a)->next->content < (*stack_a)->next->next->content)
		{
			swap_a(stack_a);
		}
	}

	if(((*stack_a)->content > (*stack_a)->next->content) &&
	(*stack_a)->next->content < (*stack_a)->next->next->content)
	{
		swap_ra(stack_a);
		return ;
	}

	if(((*stack_a)->content > (*stack_a)->next->content) &&
	(*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		swap_a(stack_a);
		swap_rra(stack_a);
	}

}

