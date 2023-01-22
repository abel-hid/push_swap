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


// int main(int ac, char **av)
// {
// 	(void)ac;

// 	t_list *head = ft_lstnew(atoi(av[1]));

// 	ft_lstadd_back(&head,ft_lstnew(atoi(av[2])));

// 			while(head !=NULL)
// 			{

// 				printf("%d\n",head->content);
// 				head = head->next;

// 			}

// }
