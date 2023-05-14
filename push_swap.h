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

typedef struct s_list
{
	int			content;
	int			index;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(int content);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void 		delete_last_node(t_list **stack_a);
int			ft_lstsize(t_list *lst);
int 		main(int ac, char **av);
char		**ft_addargs(char *av[]);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);
int 		ft_noting(t_list **stack_a, char *av[]);
char		*ft_strdup(const char *s1);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
long long	ft_atoi(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			is_not_num(char **str);
int			ft_isdigit(int c);
int 		ft_is_double(char **str);
int 		ft_is_overflow(char **str);
void 		ft_sort_2num(t_list **stack_a);
void 		sa(t_list **stack_a);
void 		ft_sort_3num(t_list **stack_a);
void		ra(t_list **stack_a);
void rb(t_list **stack_b);
void 		rra(t_list **stack_a);
void rrb(t_list **stack_b);
void pb(t_list **stack_a,t_list **stack_b);
void pa(t_list **stack_a,t_list **stack_b);
void 		delete_first_node(t_list **stack_a);
void 		ft_sort_4num(t_list **stack_a, t_list **stack_b);
void ft_sort_5num(t_list **stack_a, t_list **stack_b);
void sort_all_num(t_list **stack_a, t_list **stack_b);
int ft_error(void);
int	ft_isdigit(int c);
int	ft_get_min(t_list **stack_a);
void get_index(t_list *stack_a);

#endif
