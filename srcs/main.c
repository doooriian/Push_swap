/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:46:30 by doley             #+#    #+#             */
/*   Updated: 2024/11/19 17:48:42 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	verif(t_stack *stack_a)
{
	if (!stack_a)
	{
		printf("pas de stack");
		return ;
	}
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->nbr);
		stack_a = stack_a->next;
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
	verif(stack_a);
}
