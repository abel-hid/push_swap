/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:47:58 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/18 16:54:11 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freelist(t_list **a)
{
	t_list	*tmp;

	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		(*a) = tmp;
	}
	*a = NULL;
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac != 1)
	{
		ft_create(&stack_a, av);
		if (ft_lstsize(stack_a) == 2)
			ft_sort_2num(&stack_a);
		if (ft_lstsize(stack_a) == 3)
			ft_sort_3num(&stack_a);
		if (ft_lstsize(stack_a) == 4)
			ft_sort_4num(&stack_a, &stack_b);
		if (ft_lstsize(stack_a) == 5)
			ft_sort_5num(&stack_a, &stack_b);
		if (ft_lstsize(stack_a) > 5 && !ft_is_sorted(&stack_a))
		{
			get_index(stack_a);
			sort_all_num(&stack_a, &stack_b);
		}
	}

	// printf("----------a---------\n");
	// while(stack_a)
	// {
	// 	printf("%d\n",stack_a->content);
	// 	stack_a = stack_a->next;
	// }

	freelist(&stack_a);
	return (0);
}
