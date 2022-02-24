/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:33:24 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/21 10:11:17 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i;
	int		*result;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	result = (int *)malloc(sizeof(int) * bound);
	*range = result;
	if (!*range)
		return (-1);
	i = 0;
	while (i < bound)
	{
		result[i] = min + i;
		i++;
	}
	return (bound);
}
