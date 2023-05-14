#include "push_swap.h"
 int	ft_get_max(t_list **stcak_a);
void reset_all(t_list **stack_a);

void reset_all(t_list **stack_a)
{
	t_list *tmp;
	tmp = (*stack_a);

	while(tmp)
	{
		tmp->index = -1;
		tmp= tmp->next;
	}

}
void get_index(t_list *stack_a)
{

	int new_index = 1;
	int min;
	t_list *tmp ;

	reset_all(&stack_a);

	tmp = stack_a;
	while (stack_a)
	{
		min  = ft_get_min(&tmp);
		 if(tmp->content == min  && tmp->index == -1)
				tmp->index =new_index++;

		min  = ft_get_min(&stack_a);
		if(stack_a->content == min && stack_a->index == -1)
		{
			stack_a->index = new_index++;
			stack_a = tmp;
		}
		 stack_a = stack_a->next;
	}

}
void function(t_list **stack_a, t_list **stack_b)
{

	int chunk;
	int j;
	int a;


	chunk = ft_lstsize(*stack_a) / 5;
	a = chunk;
	j = 0;
		// printf("indexes :%d\n", (*stack_a)->index);
	while(*stack_a)
	{

		if((*stack_a)->index <=  a)
		{

		// printf("indexes :%d\n", (*stack_a)->index);
			pb(stack_a,stack_b);
				j++;
			if((*stack_b)->index  > (a - (chunk / 2)))
				rb(stack_b);
			if(a == j)
				a += chunk;
		}
		else
			ra(stack_a);
	}
	// 	while (*stack_b)
	// {
	// 	printf("indexes :%d\n", (*stack_b)->index);
	// 	(*stack_b) = (*stack_b)->next;
	// }

}

int position(t_list *stack_b , int index)
{
	int i;
	i = 0;
	while(stack_b)
	{
		if (stack_b->index != index)
			i++;
		else
			break ;
			stack_b = stack_b->next;
	}
	return(i);
}

int get_num_action(t_list *stack_b, int pos)
{
	int half;
	int i;

	half = ft_lstsize(stack_b) / 2;
	if (pos <= half)
		i = pos;
	else
		i = (ft_lstsize(stack_b) - pos);
	return(i);


}

void sort_all_num(t_list **stack_a, t_list **stack_b)
{
	function(stack_a,stack_b);

	int max;
	int befor_max;
	int max_instruction;
	int b;

	 while(*stack_b)
	 {
		max = position(*stack_b,ft_lstsize(*stack_b));
		befor_max = position(*stack_b,ft_lstsize(*stack_b) - 1);
		max_instruction = get_num_action(*stack_b, max);
		b = get_num_action(*stack_b, befor_max);


		if(max_instruction > b)
		{
			if(befor_max <= ft_lstsize(*stack_b) / 2)
			{
				while(b--)
				rb(stack_b);
			}
			else
			{
				while(b--)
				 rrb(stack_b);
			}
			pa(stack_a,stack_b);
			get_index(*stack_b);

			max_instruction = get_num_action(*stack_b,position(*stack_b,ft_lstsize(*stack_b)));
			max = position(*stack_b,ft_lstsize(*stack_b));


			if(max <= ft_lstsize(*stack_b) / 2)
			{
				while(max_instruction--)
				rb(stack_b);
			}
			else
			{
				while(max_instruction--)
				rrb(stack_b);
			}
			pa(stack_a,stack_b);
			sa(stack_a);
		}
		else
		{
		if (max <= ft_lstsize(*stack_b) / 2)
			{
				while(max_instruction--)
				rb(stack_b);
			}
			else
			{
				while(max_instruction--)
				rrb(stack_b);
			}
			pa(stack_a,stack_b);
		}
	}
}

