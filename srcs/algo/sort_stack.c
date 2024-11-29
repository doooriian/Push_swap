/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:39:47 by doley             #+#    #+#             */
/*   Updated: 2024/11/29 20:05:41 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = return_cheapest(*a);
	if (cheapest_node->above_half
		&& cheapest_node->target_node->above_half)
		rev_rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_half)
		&& !(cheapest_node->target_node->above_half))
		rotate_both(a, b, cheapest_node);
	prep_for_push(a, cheapest_node, 'a');
	prep_for_push(b, cheapest_node->target_node, 'b');
	pb(a, b, true);
}

void	push_b_to_a(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = return_cheapest(*b);
	if (cheapest_node->above_half
		&& cheapest_node->target_node->above_half)
		rev_rotate_both(b, a, cheapest_node);
	else if (!(cheapest_node->above_half)
		&& !(cheapest_node->target_node->above_half))
		rotate_both(b, a, cheapest_node);
	prep_for_push(b, cheapest_node, 'b');
	prep_for_push(a, cheapest_node->target_node, 'a');
	pa(a, b, true);
}

void	set_data(t_stack *a, t_stack *b, char stack_name)
{
	set_index_and_half(a);
	set_index_and_half(b);
	if (stack_name == 'a')
	{
		set_target_node_a(a, b);
		set_cost(a, b);
		set_cheapest(a);
	}
	else
	{
		set_target_node_b(a, b);
		set_cost(b, a);
		set_cheapest(b);
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int		len_a;

	len_a = stack_len(*a);
	pb (a, b, true);
	len_a--;
	if (len_a-- > 3)
		pb (a, b, true);
	while (len_a > 3 && !(is_sorted(*a)))
	{
		set_data(*a, *b, 'a');
		push_a_to_b(a, b);
		len_a--;
	}
	sort_three(a);
	while (*b)
	{
		set_data(*a, *b, 'b');
		push_b_to_a(a, b);
	}
	set_index_and_half(*a);
	min_on_top(a);
}
