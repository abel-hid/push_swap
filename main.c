/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:25:43 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/25 21:25:46 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void freelist(t_list **a)
{

	t_list *tmp;

	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		(*a) = tmp;
	}
	*a = NULL;
}

void leaks()
{
	system("leaks push_swap");
}
int main(int ac, char **av)
{
	// atexit(leaks);

	t_list *stack_a;
	t_list *stack_b;
	stack_a = NULL;
	stack_b = NULL;

	if(ac != 1)
	{
		ft_noting(&stack_a,av);

		if(ft_lstsize(stack_a) == 2)
			ft_sort_2num(&stack_a);
		if(ft_lstsize(stack_a) == 3)
			ft_sort_3num(&stack_a);

		if(ft_lstsize(stack_a)  == 4)
			ft_sort_4num(&stack_a,&stack_b);
		if(ft_lstsize(stack_a)  == 5)
			ft_sort_5num(&stack_a,&stack_b);
		if( ft_lstsize(stack_a) > 5)
		{
			get_index(stack_a);
			sort_all_num(&stack_a,&stack_b);
		}
	}
		printf("-------------a---------\n");
		while(stack_a)
		{
			printf(" %d\n", stack_a->content);
			stack_a = stack_a->next;
		}
			freelist(&stack_a);

}
