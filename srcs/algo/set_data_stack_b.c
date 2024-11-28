/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data_stack_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:46:20 by doley             #+#    #+#             */
/*   Updated: 2024/11/28 15:49:43 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	set_target_node_b(t_stack	*a, t_stack *b)
{
	long	best_target;
	t_stack	*current_a;
	t_stack	*target_node;

	while (b != NULL)
	{
		best_target = LONG_MAX;
		current_a = a;
		while (current_a != NULL)
		{
			if (current_a->nbr < b->nbr
				&& current_a->nbr > best_target)
			{
				best_target = current_a->nbr;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_target == LONG_MAX)
			b->data->target_node = find_min(a);
		else
			b->data->target_node = target_node;
		b = b->next;
	}
}
