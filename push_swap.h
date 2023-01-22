#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
int 	main(int ac, char **av);
char	**ft_addargs(char *av[]);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
void 	ft_noting(t_list **stack_a, char *av[]);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);


#endif
