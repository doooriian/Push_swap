NAME	= push_swap

CC		= cc

CFLAGS	= -Wall -Wextra -Werror -g3

RM		= rm -f

LIBFT_DIR = includes/Libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC		= srcs/main.c \
		  	srcs/moves/push.c \
			srcs/moves/reverse_rotate.c \
			srcs/moves/rotate.c \
			srcs/moves/swap.c \
		  	srcs/utils/free.c \
			srcs/utils/init_stack.c \
			srcs/utils/parsing.c

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

.PHONY : all clean fclean re