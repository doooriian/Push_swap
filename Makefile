CC          = cc
CFLAGS		= -Wall -Wextra -Werror
RM          = rm -f

NAME        = push_swap
BONUS_NAME  = checker

LIBFT_DIR   = includes/Libft
LIBFT       = $(LIBFT_DIR)/libft.a

COMMON_SRC  = \
    srcs/algo/set_data_stack_a.c \
    srcs/algo/set_data_stack_b.c \
    srcs/algo/sort_stack.c \
    srcs/algo/sort_three.c \
    srcs/algo/sort_utils.c \
    srcs/algo/utils.c \
    srcs/moves/push.c \
    srcs/moves/reverse_rotate.c \
    srcs/moves/rotate.c \
    srcs/moves/swap.c \
    srcs/parsing/free.c \
    srcs/parsing/init_stack.c \
    srcs/parsing/parsing.c

PUSH_SWAP_SRC = $(COMMON_SRC) srcs/main.c
PUSH_SWAP_OBJS = $(PUSH_SWAP_SRC:.c=.o)

CHECKER_SRC = $(COMMON_SRC) \
    bonus/main.c \
    bonus/checker.c \
    bonus/include/gnl/get_next_line.c \
    bonus/include/gnl/get_next_line_utils.c
CHECKER_OBJS = $(CHECKER_SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(PUSH_SWAP_OBJS)
	$(CC) $(CFLAGS) $(PUSH_SWAP_OBJS) $(LIBFT) -o $(NAME)

bonus: $(LIBFT) $(BONUS_NAME)

$(BONUS_NAME): $(CHECKER_OBJS)
	$(CC) $(CFLAGS) $(CHECKER_OBJS) $(LIBFT) -o $(BONUS_NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(PUSH_SWAP_OBJS) $(CHECKER_OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all bonus clean fclean re
