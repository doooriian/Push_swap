/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:46:30 by doley             #+#    #+#             */
/*   Updated: 2024/11/20 19:28:13 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	verif(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a != NULL || stack_b != NULL)
	{
		if (stack_a)
		{
			printf("%d", stack_a->nbr);
			stack_a = stack_a->next;
		}
		printf("    ");
		if (stack_b)
		{
			printf("%d", stack_b->nbr);
			stack_b = stack_b->next;
		}
		printf("\n");
	}
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	if (argc <= 1)
		return (printf("no input"));
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		init_stack_a(&stack_a, ft_split(argv[1], ' '), 1);
	else
		init_stack_a(&stack_a, argv + 1, 0);
	pb(&stack_a, &stack_b);
	verif(stack_a, stack_b);
}
