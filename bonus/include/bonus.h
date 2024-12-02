/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:33:17 by doley             #+#    #+#             */
/*   Updated: 2024/12/02 18:46:19 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "gnl/get_next_line.h"
# include "../../includes/push_swap.h"

typedef struct s_moves
{
	char			*move;
	struct s_moves	*next;
}	t_moves;

void	free_moves(t_moves **list);
void	ft_check(t_stack **a, t_stack **b);

#endif
