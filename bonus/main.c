/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:01:23 by doley             #+#    #+#             */
/*   Updated: 2024/12/02 18:46:29 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/bonus.h"

void	free_moves(t_moves **list)
{
	t_moves	*current;
	t_moves	*tmp;

	if (!list || !*list)
		return ;
	current = *list;
	while (current)
	{
		tmp = current;
		free(tmp->move);
		free(tmp);
		current = current->next;
	}
	*list = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc <= 1)
		return (-1);
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		init_stack_a(&stack_a, ft_split(argv[1], ' '), 1);
	else
		init_stack_a(&stack_a, argv + 1, 0);
	ft_check(&stack_a, &stack_b);
	free_stack(&stack_a);
}
