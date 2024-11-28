/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:09:07 by doley             #+#    #+#             */
/*   Updated: 2024/11/28 17:33:48 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*return_cheapest(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_half)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_half)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*a != cheapest_node && *b != cheapest_node->target_node)
		rr(a, b);
	set_index_and_half(*a);
	set_index_and_half(*b);
}

void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*a != cheapest_node && *b != cheapest_node->target_node)
		rrr(a, b);
	set_index_and_half(*a);
	set_index_and_half(*b);
}

void	pushing(t_stack **a, t_stack **b, char dest_name)
{
	t_stack	*cheapest_node;

	cheapest_node = return_cheapest(*a);
	if (cheapest_node->above_half
		&& cheapest_node->target_node->above_half)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_half)
		&& !(cheapest_node->target_node->above_half))
		rev_rotate_both(a, b, cheapest_node);
	prep_for_push(a, cheapest_node, 'a');
	prep_for_push(b, cheapest_node->target_node, 'b');
	if (dest_name == 'a')
		pa(a, b);
	else
		pb(a, b);
}
