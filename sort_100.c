#include "push_swap.h"
 int	ft_get_max(t_list **stcak_a);
void get_index(t_list *stack_a)
{

	int new_pos = 1;
 	int min;
 	t_list *tmp ;


	tmp = stack_a;
	while (stack_a)
	{
		min  = ft_get_min(&tmp);
		 if(tmp->content == min  && tmp->pos == -1)
		 {
				tmp->pos =new_pos;
				new_pos++;
		 }
		min  = ft_get_min(&stack_a);
		if(stack_a->content == min && stack_a->pos == -1)
		{
			stack_a->pos = new_pos;
			new_pos++;
			stack_a = tmp;
		}
		 stack_a = stack_a->next;
	}

}
void function(t_list **stack_a, t_list **stack_b)
{
	get_index(*stack_a);

	int i;
	int j;


	i = ft_lstsize(*stack_a) / 2;
	int a;
	a = i;
	j = 0;

	while(*stack_a)
	{
		if((*stack_a)->pos <=  a)
		{
			ft_push_b(stack_a,stack_b);
			j++;
			if((*stack_b)->pos  > (a - (i / 2)))
				rb(stack_b);
			if(i == j)
			i += a;
		}
		else
			ra(stack_a);
	}
}


void sort_all_num(t_list **stack_a, t_list **stack_b)
{
	function(stack_a,stack_b);
	get_index(*stack_b);

	// int size = ft_lstsize(*stack_b);
	int max = ft_get_max(stack_b);
	printf("max = %d\n",max);

	while ((*stack_b))
	{
		if((*stack_b)->content != max)
		{
			rb(stack_b);
		}
		else
			ft_push_a(stack_a,stack_b);

	}
}

