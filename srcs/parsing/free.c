/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:23:01 by doley             #+#    #+#             */
/*   Updated: 2024/11/25 16:38:43 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_split(char **argv)
{
	size_t	i;

	i = 0;
	if (!argv || !*argv)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current_node;

	if (!stack || !*stack)
		return ;
	current_node = *stack;
	while (current_node != NULL)
	{
		tmp = current_node->next;
		free(current_node);
		current_node = tmp;
	}
	*stack = NULL;
}

void	free_error(t_stack **stack, char **argv, bool is_split)
{
	free_stack(stack);
	if (is_split)
		free_split(argv);
	write(2, "error\n", 6);
	exit (1);
}
