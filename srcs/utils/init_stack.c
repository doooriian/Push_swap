/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:50:42 by doley             #+#    #+#             */
/*   Updated: 2024/11/20 16:13:14 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*find_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

static void	add_new_node(t_stack **stack, int nbr)
{
	t_stack	*new_node;
	t_stack	*last_node;

	if (!stack)
		return ;
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->nbr = nbr;
	new_node->next = NULL;
	last_node = find_last_node(*stack);
	if (!last_node)
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->prev = last_node;
		last_node->next = new_node;
	}
}

void	init_stack_a(t_stack **stack_a, char **argv, bool is_split)
{
	long	nbr;
	size_t	i;

	if (!argv[0])
		free_error(stack_a, argv, is_split);
	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (!ft_parsing(*stack_a, argv[i], nbr))
			free_error(stack_a, argv, is_split);
		add_new_node(stack_a, (int) nbr);
		i++;
	}
	if (is_split)
		ft_free_split(argv);
}
