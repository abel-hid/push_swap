/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 02:57:48 by abel-hid          #+#    #+#             */
/*   Updated: 2023/05/16 04:36:22 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# define BUFFER_SIZE 42
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
char		**ft_addargs(char *av[]);
char		*ft_strjoin(char *s1, char *s2);
char		**ft_split(char *s, char c);
int			ft_create(t_list **stack_a, char *av[]);
char		*ft_strdup(const char *s1);
int			ft_strcmp( char *s1, char *s2);
size_t		ft_strlen(const char *s);
long long	ft_atoi(char *str);
char		*ft_substr(char *s, unsigned int start, size_t len);
int			is_not_num(char **str);
int			ft_isdigit(int c);
int			ft_is_double(char **str);
int			ft_is_overflow(char **str);
char	*ft_get_line(char **str, char **line, int new_line);
char	*get_rest(char **str, int new_line);
int	ft_check_new_line(char *str);
char	*get_next_line(int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif
