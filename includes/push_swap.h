/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:40:54 by doley             #+#    #+#             */
/*   Updated: 2024/11/28 17:53:52 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			cheapest;
	bool			above_half;
	struct s_stack	*target_node;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

bool	ft_parsing(t_stack *stack, char *str, long nbr);
t_stack	*find_last_node(t_stack *stack);
void	init_stack_a(t_stack **stack_a, char **argv, bool is_split);
void	free_split(char **argv);
void	free_stack(t_stack **stack);
void	free_error(t_stack **stack, char **argv, bool is_split);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
int		stack_len(t_stack *stack);
t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);
bool	is_sorted(t_stack *stack_a);
void	min_on_top(t_stack **a);
t_stack	*return_cheapest(t_stack *stack);
void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_name);
void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node);
void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node);
void	pushing(t_stack **a, t_stack **b, char dest_name);
void	sort_three(t_stack **stack_a);
void	set_data(t_stack *a, t_stack *b, char stack_name);
void	sort_stack(t_stack **a, t_stack **b);
void	set_target_node_b(t_stack	*a, t_stack *b);
void	set_index_and_half(t_stack *stack);
void	set_target_node_a(t_stack	*a, t_stack *b);
void	set_cost(t_stack *a, t_stack *b);
void	set_cheapest(t_stack *stack);

#endif
