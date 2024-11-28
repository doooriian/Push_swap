/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:11:06 by doley             #+#    #+#             */
/*   Updated: 2024/11/28 15:44:43 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	set_index_and_half(t_stack *stack)
{
	int		i;
	int		half;

	if (!(stack))
		return ;
	i = 0;
	half = stack_len(stack) / 2;
	while (stack != NULL)
	{
		stack->data->index = i;
		if (i < half)
			stack->data->above_half = false;
		else
			stack->data->above_half = true;
		i++;
		stack = stack->next;
	}
}

void	set_target_node(t_stack	*a, t_stack *b)
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
			a->data->target_node = find_max(b);
		else
			a->data->target_node = target_node;
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
	while (a)
	{
		b = a->data->target_node;
		cost_a = individual_cost(a->data->index, len_a, a->data->above_half);
		cost_b = individual_cost(b->data->index, len_b, b->data->above_half);
		if (a->data->above_half == b->data->above_half)
		{
			if (cost_a >= cost_b)
				a->data->push_cost = cost_a;
			else
				a->data->push_cost = cost_b;
		}
		else
			a->data->push_cost = cost_a + cost_b;
		a = a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	t_stack	*current_cheapest;

	current_cheapest = stack;
	while (stack != NULL)
	{
		stack->data->cheapest = false;
		if (stack->data->push_cost < current_cheapest->data->push_cost)
			current_cheapest = stack;
		stack = stack->next;
	}
	current_cheapest->data->cheapest = true;
}
