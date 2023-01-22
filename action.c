#include "push_swap.h"


char **ft_addargs(char *av[])
{
	char	*str;
	char	**p;
	int		i;

	i = 0;
	str = ft_strdup(" ");
	while (av[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i++]);
	}
	p = ft_split(str, ' ');
	return(p);
}

void ft_noting(t_list **stack_a, char *av[])
{
	char **p;
	int i = 1;
	p = ft_addargs(av);

	while(p[i] != '\0')
	{
		ft_lstadd_back(stack_a,ft_lstnew(ft_atoi(p[i++])));
	}
}

int main(int ac, char **av)
{
	(void)ac;

	t_list *stack_a;
	stack_a = NULL;

	ft_noting(&stack_a,av);

	while(stack_a)
	{
		printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}

}
