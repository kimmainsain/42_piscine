/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:35:30 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/21 10:11:00 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*result;

	if (min >= max)
		return (0);
	range = max - min;
	result = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
