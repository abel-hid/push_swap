/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:26:06 by abel-hid          #+#    #+#             */
/*   Updated: 2023/01/25 21:26:10 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void 	delete_last_node(t_list **stack_a);
int		ft_lstsize(t_list *lst);
int 	main(int ac, char **av);
char	**ft_addargs(char *av[]);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
int 	ft_noting(t_list **stack_a, char *av[]);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
long long		ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		is_not_num(char **str);
int		ft_isdigit(int c);
int 	ft_is_double(char **str);
int 	ft_is_overflow(char **str);
void 	ft_sort_2num(t_list **stack_a);
void 	swap_a(t_list **stack_a);
void 	ft_sort_3num(t_list **stack_a);
void	swap_ra(t_list **stack_a);
void 	swap_rra(t_list **stack_a);

#endif
