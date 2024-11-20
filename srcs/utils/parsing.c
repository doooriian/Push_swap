/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:41:36 by doley             #+#    #+#             */
/*   Updated: 2024/11/20 15:56:14 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static bool	check_syntax(char *str)
{
	size_t	i;

	i = 0;
	if (!str[0])
		return (0);
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static bool	check_repetition(t_stack *stack, int nbr)
{
	if (!stack)
		return (1);
	while (stack != NULL)
	{
		if (stack->nbr == nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}

bool	ft_parsing(t_stack *stack, char *str, long nbr)
{
	if (INT_MIN > nbr || nbr > INT_MAX)
		return (0);
	else if (!check_syntax(str))
		return (0);
	else if (!check_repetition(stack, (int) nbr))
		return (0);
	else
		return (1);
}
