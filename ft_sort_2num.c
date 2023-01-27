#include "push_swap.h"

void ft_sort_2num(t_list **stack_a)
{
	if((*stack_a)->content > (*stack_a)->next->content)
		swap_a(stack_a);
}
