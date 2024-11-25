/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:46:30 by doley             #+#    #+#             */
/*   Updated: 2024/11/25 16:38:34 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

// void	verif(t_stack *stack_a, t_stack *stack_b)
// {
// 	while (stack_a != NULL || stack_b != NULL)
// 	{
// 		if (stack_a)
// 		{
// 			printf("%d", stack_a->nbr);
// 			stack_a = stack_a->next;
// 		}
// 		printf("    ");
// 		if (stack_b)
// 		{
// 			printf("%d", stack_b->nbr);
// 			stack_b = stack_b->next;
// 		}
// 		printf("\n");
// 	}
// }

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
	if (!is_sorted(stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&stack_a);
		else if (stack_len(stack_a) == 3)
			sort_three(&stack_a);
		else
			sort_stack(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
}
