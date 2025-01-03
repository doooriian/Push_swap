/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:20:01 by doley             #+#    #+#             */
/*   Updated: 2024/11/29 20:05:55 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_stack **stack_a)
{
	t_stack	*max_node;

	max_node = find_max(*stack_a);
	if (*stack_a == max_node)
		ra(stack_a, true);
	else if ((*stack_a)->next == max_node)
		rra(stack_a, true);
	if (!is_sorted(*stack_a))
		sa(stack_a, true);
}
