/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:33:17 by doley             #+#    #+#             */
/*   Updated: 2024/11/29 20:28:03 by doley            ###   ########.fr       */
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

void	ft_check(t_stack **a, t_stack **b);

#endif
