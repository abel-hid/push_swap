#include "push_swap.h"


void swap_a(t_list **stack_a)
{
    if (*stack_a != NULL && (*stack_a)->next != NULL)
	 {
       t_list *temp = (*stack_a)->next;
        (*stack_a)->next = temp->next;
        temp->next = *stack_a;
        *stack_a = temp;
    }
	write(1, "sa\n", 3);
}


char **ft_addargs(char *av[])
{
	char	*str;
	char	**p;
	int		i;

	i = 1;
	str = ft_strdup(" ");
	while (av[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i++]);
	}
	p = ft_split(str, ' ');
	return(p);
}



int main(int ac, char **av)
{
	(void)ac;

	t_list *stack_a;
	t_list *stack_b;
	stack_a = NULL;
	stack_b = NULL;


	ft_noting(&stack_a,av);

	// swap_a(&stack_a);


	while(stack_a)
	{
		printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}

}
