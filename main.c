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


int main(int ac, char **av)
{

	t_list *stack_a;
	t_list *stack_b;
	stack_a = NULL;
	stack_b = NULL;

	if(ac != 1)
	{
		ft_noting(&stack_a,av);

		// if(ft_lstsize(stack_a) == 2)
		// 	ft_sort_2num(&stack_a);

		// if(ft_lstsize(stack_a) == 3)
		// 	ft_sort_3num(&stack_a);

		// if(ft_lstsize(stack_a)  == 4)
		// 	ft_sort_4num(&stack_a,&stack_b);
		// if(ft_lstsize(stack_a)  == 5)
		// 	ft_sort_5num(&stack_a,&stack_b);
		// if(ft_lstsize(stack_a)  >= 1)
			sort_all_num(&stack_a,&stack_b);




		printf("a\n");
		printf("\n");
		while(stack_a)
		{
			printf("%d\n", stack_a->content);
			stack_a = stack_a->next;

		}
		printf("\n");
		printf("b\n");
		printf("\n");
		while(stack_b)
		{
			printf("%d\n", stack_b->content);
			stack_b = stack_b->next;
		}
	}
}
