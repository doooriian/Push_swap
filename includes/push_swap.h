/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:40:54 by doley             #+#    #+#             */
/*   Updated: 2024/11/19 17:40:53 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>

typedef struct	s_stack
{
	int	nbr;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;


/* FUNCTIONS */
void	ft_free_split(char **argv);
void	free_error(t_stack **stack, char **argv, bool is_split);
t_stack	*find_last_node(t_stack *stack);
void	init_stack_a(t_stack **stack_a, char **argv, bool is_split);
bool	ft_parsing(t_stack *stack, char *str, long nbr);

#endif
