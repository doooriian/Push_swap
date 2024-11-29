/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:19:38 by doley             #+#    #+#             */
/*   Updated: 2024/11/29 20:02:12 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last_node;

	if (!(*stack) || !(*stack)->next)
		return ;
	last_node = find_last_node(*stack);
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	tmp->prev = last_node;
	tmp->next = NULL;
	last_node->next = tmp;
}

void	ra(t_stack **stack, bool do_write)
{
	rotate(stack);
	if (do_write)
		write(1, "ra\n", 3);
}

void	rb(t_stack **stack, bool do_write)
{
	rotate(stack);
	if (do_write)
		write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b, bool do_write)
{
	rotate(stack_a);
	rotate(stack_b);
	if (do_write)
		write(1, "rr\n", 3);
}
