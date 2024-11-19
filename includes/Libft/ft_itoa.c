/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:56:40 by doley             #+#    #+#             */
/*   Updated: 2024/10/15 14:18:12 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_rev_str(char *str)
{
	size_t	start;
	size_t	end;
	char	tmp;

	if (ft_strlen(str) == 1)
		return (str);
	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	int		len;
	char	*str;

	i = 0;
	nb = (long)n;
	len = ft_count_len(nb);
	str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	if (nb == 0)
		str[i] = '0';
	if (nb < 0)
	{
		str[len - 1] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	return (ft_rev_str(str));
}
