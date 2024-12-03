/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:27:12 by doley             #+#    #+#             */
/*   Updated: 2024/12/03 16:48:07 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/bonus.h"

static t_moves	*find_last_move(t_moves *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

static bool	is_move(char *str)
{
	if (ft_strncmp(str, "pb\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "pa\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "ra\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "rb\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "rr\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "rra\n", 4) == 0)
		return (1);
	if (ft_strncmp(str, "rrb\n", 4) == 0)
		return (1);
	if (ft_strncmp(str, "rrr\n", 4) == 0)
		return (1);
	if (ft_strncmp(str, "sa\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "sb\n", 3) == 0)
		return (1);
	if (ft_strncmp(str, "ss\n", 3) == 0)
		return (1);
	return (0);
}

static void	ft_execute(t_stack **a, t_stack **b, char *str)
{
	if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(a, b, false);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(a, b, false);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(a, false);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(b, false);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(a, b, false);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(a, false);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(b, false);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(a, b, false);
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(a, false);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(b, false);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(a, b, false);
}

static void	add_new_move(t_moves **list, char *move)
{
	t_moves	*new_node;
	t_moves	*last_node;

	if (!list)
		return ;
	new_node = malloc(sizeof(t_moves));
	if (!new_node)
		return ;
	new_node->move = move;
	new_node->next = NULL;
	last_node = find_last_move(*list);
	if (!last_node)
		*list = new_node;
	else
		last_node->next = new_node;
}

void	ft_check(t_stack **a, t_stack **b)
{
	char	*line;
	t_moves	*list;

	list = NULL;
	line = get_next_line(0);
	while (line)
	{
		if (!is_move(line))
		{
			free_moves(&list);
			free(line);
			free_error(a, NULL, 0);
		}
		add_new_move(&list, line);
		line = get_next_line(0);
	}
	while (list)
	{
		ft_execute(a, b, list->move);
		list = list->next;
	}
	free_moves(&list);
}
