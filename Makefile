NAME = push_swap

SRCS = list.c\
		action.c\
		utils.c\

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

