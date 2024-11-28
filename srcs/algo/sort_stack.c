/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:39:47 by doley             #+#    #+#             */
/*   Updated: 2024/11/28 17:35:46 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
	pb (a, b);
	len_a--;
	if (len_a-- > 3)
		pb (a, b);
	while (len_a > 3 && !(is_sorted(*a)))
	{
		set_data(*a, *b, 'a');
		pushing(a, b, 'b');
		len_a--;
	}
	sort_three(a);
	while (*b)
	{
		set_data(*a, *b, 'b');
		pushing(b, a, 'a');
	}
	set_index_and_half(*a);
	min_on_top(a);
}
