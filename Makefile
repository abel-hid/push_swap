# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-hid <abel-hid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 01:48:07 by abel-hid          #+#    #+#              #
#    Updated: 2023/05/17 13:38:21 by abel-hid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker

SRCS = list.c\
		action.c\
		action2.c\
		utils.c\
		utils_1.c\
		error.c\
		utils_2.c\
		ft_sort_2num.c\
		ft_sort_3num.c\
		ft_sort_4num.c\
		main.c\
		sort_all.c\
		index.c\
		action3.c\

BONUS_SRC =	action_bonus.c\
			action_bonus2.c\
			action_bonus3.c\
			utils.c\
			utils_1.c\
			error.c\
			utils_2.c\
			get_next_line.c\
			list.c\
			checker.c\


OBJS = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(CHECKER)
$(CHECKER) : $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(CHECKER)

%.o: %.c push_swap.h push_swap_bonus.h
	$(CC) $(CFLAGS) -c $<
clean:
	$(RM) $(OBJS) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME) $(CHECKER)

re: fclean $(NAME) $(CHECKER)

