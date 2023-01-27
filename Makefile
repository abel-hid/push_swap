# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 21:24:48 by abel-hid          #+#    #+#              #
#    Updated: 2023/01/25 21:24:50 by abel-hid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = list.c\
		action.c\
		utils.c\
		utils_1.c\
		error.c\
		utils_2.c\
		ft_sort_2num.c\
		ft_sort_3num.c\
		main.c\
		



OBJS = $(SRCS:.c=.o)


CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

