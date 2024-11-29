/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:17:35 by doley             #+#    #+#             */
/*   Updated: 2024/11/29 20:03:09 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	if (tmp->next)
		tmp->next->prev = tmp;
	(*stack)->next = tmp;
	(*stack)->prev = NULL;
}

void	sa(t_stack **stack, bool do_write)
{
	swap(stack);
	if (do_write)
		write(1, "sa\n", 3);
}

void	sb(t_stack **stack, bool do_write)
{
	swap(stack);
	if (do_write)
		write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b, bool do_write)
{
	swap(stack_a);
	swap(stack_b);
	if (do_write)
		write(1, "ss\n", 3);
}
