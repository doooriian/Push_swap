/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:40:54 by doley             #+#    #+#             */
/*   Updated: 2024/11/20 19:14:32 by doley            ###   ########.fr       */
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


/* MOVES */
void	ss(t_stack **stack_a, t_stack **stack_b);
void	sb(t_stack **stack);
void	sa(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rb(t_stack **stack);
void	ra(t_stack **stack);
void	rrr(t_stack **stack);
void	rrb(t_stack **stack);
void	rra(t_stack **stack);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);

/* UTILS */
void	free_split(char **argv);
void	free_error(t_stack **stack, char **argv, bool is_split);
t_stack	*find_last_node(t_stack *stack);
void	init_stack_a(t_stack **stack_a, char **argv, bool is_split);
bool	ft_parsing(t_stack *stack, char *str, long nbr);


/* FUNCTIONS */
void	free_stack(t_stack **stack);
int	stack_len(t_stack *stack);
void	sort_three(t_stack **stack_a);
bool	is_sorted(t_stack *stack_a);
t_stack	*find_max(t_stack *stack);

#endif
