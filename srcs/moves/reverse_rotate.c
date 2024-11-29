/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:19:59 by doley             #+#    #+#             */
/*   Updated: 2024/11/29 20:01:27 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*last_node;

	if (!(*stack) || !(*stack)->next)
		return ;
	last_node = find_last_node(*stack);
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	(*stack)->prev = last_node;
	last_node->next = *stack;
	*stack = last_node;
}

void	rra(t_stack **stack, bool do_write)
{
	reverse_rotate(stack);
	if (do_write)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **stack, bool do_write)
{
	reverse_rotate(stack);
	if (do_write)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b, bool do_write)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (do_write)
		write(1, "rrr\n", 4);
}
