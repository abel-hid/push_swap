/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 03:18:35 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 08:52:55 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_is_sorted(t_list *stack_a)
{
	t_list	*current;

	current = stack_a;
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

void	error(void)
{
	write(1, "Error\n", 6);
	exit (1);
}

void	function(char *read, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(read, "sa\n")))
		sa(stack_a);
	else if (!(ft_strcmp(read, "sb\n")))
		sb(stack_b);
	else if (!(ft_strcmp(read, "ss\n")))
		ss(stack_a, stack_b);
	else if (!(ft_strcmp(read, "ra\n")))
		ra(stack_a);
	else if (!(ft_strcmp(read, "rb\n")))
		rb(stack_b);
	else if (!(ft_strcmp(read, "rr\n")))
		rr(stack_a, stack_b);
	else if (!(ft_strcmp(read, "rra\n")))
		rra(stack_a);
	else if (!(ft_strcmp(read, "rrb\n")))
		rrb(stack_b);
	else if (!(ft_strcmp(read, "rrr\n")))
		rrr(stack_a, stack_b);
	else if (!(ft_strcmp(read, "pb\n")))
		pb(stack_a, stack_b);
	else if (!(ft_strcmp(read, "pa\n")))
		pa(stack_a, stack_b);
	else
		error();
}

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*read;

	stack_a = NULL;
	stack_b = NULL;
	ft_create(&stack_a, av);
	if (ac != 1)
	{
		while (1)
		{
			read = get_next_line(0);
			if (read == NULL)
				break ;
			function(read, &stack_a, &stack_b);
		}
		if (!stack_b && (ft_is_sorted(stack_a)))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	freelist(&stack_a);
	return (0);
}
