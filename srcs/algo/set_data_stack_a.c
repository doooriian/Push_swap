/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:11:06 by doley             #+#    #+#             */
/*   Updated: 2024/11/28 18:37:01 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	set_index_and_half(t_stack *stack)
{
	int		i;
	int		half;

	if (!stack)
		return ;
	i = 0;
	half = stack_len(stack) / 2;
	while (stack != NULL)
	{
		stack->index = i;
		if (i < half)
			stack->above_half = false;
		else
			stack->above_half = true;
		i++;
		stack = stack->next;
	}
}

void	set_target_node_a(t_stack	*a, t_stack *b)
{
	long	best_target;
	t_stack	*current_b;
	t_stack	*target_node;

	while (a != NULL)
	{
		best_target = LONG_MIN;
		current_b = b;
		while (current_b != NULL)
		{
			if (current_b->nbr < a->nbr
				&& current_b->nbr > best_target)
			{
				best_target = current_b->nbr;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_target == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static int	individual_cost(int index, int len, bool above_half)
{
	if (above_half)
		return (len - index);
	else
		return (index);
}

void	set_cost(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;
	int	cost_a;
	int	cost_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a != NULL)
	{
		b = a->target_node;
		cost_a = individual_cost(a->index, len_a, a->above_half);
		cost_b = individual_cost(b->index, len_b, b->above_half);
		if (a->above_half == b->above_half)
		{
			if (cost_a >= cost_b)
				a->push_cost = cost_a;
			else
				a->push_cost = cost_b;
		}
		else
			a->push_cost = cost_a + cost_b;
		a = a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	t_stack	*current_cheapest;

	current_cheapest = stack;
	while (stack != NULL)
	{
		stack->cheapest = false;
		if (stack->push_cost < current_cheapest->push_cost)
			current_cheapest = stack;
		stack = stack->next;
	}
	current_cheapest->cheapest = true;
}
