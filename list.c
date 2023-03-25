/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:25:32 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/25 21:25:35 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_add;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_add = ft_lstlast(*lst);
	last_add->next = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
		new->next = *lst;
	if (new)
		*lst = new;
}


void delete_last_node(t_list **stack_a)
{
	t_list	*current = *stack_a;
	
	t_list	*tmp = NULL;

	if (*stack_a == NULL)
	 return;

	 while (current->next != NULL)
	 {
		tmp = current;
		current = current->next;
	}

	tmp->next = NULL;
	free(current);
}

void delete_first_node(t_list **stack_a)
{
	t_list* tmp = *stack_a;
	*stack_a = tmp->next;
	free(tmp);
}

