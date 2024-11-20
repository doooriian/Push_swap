/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:19:20 by doley             #+#    #+#             */
/*   Updated: 2024/11/20 19:12:13 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	push(t_stack **src_stack, t_stack **dest_stack)
{
	t_stack	*target_node;

	if (!(*src_stack))
		return ;
	target_node = *src_stack;
	target_node->prev = NULL;
	*src_stack = (*src_stack)->next;
	if (*src_stack)
		(*src_stack)->prev = NULL;
	target_node->next = *dest_stack;
	if (*dest_stack)
		(*dest_stack)->prev = target_node;
	*dest_stack = target_node;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
