NAME	= push_swap

CC		= cc

CFLAGS	= -Wall -Wextra -Werror -g3

RM		= rm -f

LIBFT_DIR = includes/Libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC		=	srcs/algo/set_data_stack_a.c \
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
			srcs/parsing/parsing.c \
			srcs/main.c

OBJS	= $(SRC:.c=.o)

$(NAME) : $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

all : $(NAME)

clean :
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re : fclean all

BONUS_NAME = checker
BONUS_SRC = bonus/main.c \
            bonus/checker.c \
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
			srcs/parsing/parsing.c \
            bonus/include/gnl/get_next_line.c \
            bonus/include/gnl/get_next_line_utils.c
BONUS_OBJS = $(BONUS_SRC:.c=.o)

bonus: $(LIBFT) $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_OBJS) $(LIBFT) -o $(BONUS_NAME)

.PHONY : all clean fclean re
