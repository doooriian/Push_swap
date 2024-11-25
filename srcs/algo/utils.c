/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:27:52 by doley             #+#    #+#             */
/*   Updated: 2024/11/25 16:16:52 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack != NULL)
	{
		if (stack->nbr > max->nbr)
			max = stack;
	 	stack = stack->next;
	}
	return (max);
}

bool	is_sorted(t_stack *stack_a)
{
	if (!stack_a)
		return (1);
	while (stack_a->next != NULL)
	{
		if (stack_a->nbr > stack_a->next->nbr)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
