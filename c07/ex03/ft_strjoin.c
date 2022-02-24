/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:36:13 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/21 10:06:40 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]);
		count = count + ft_strlen(sep);
		i++;
	}
	str = (char *)((malloc)(sizeof(char) * count + 1));
	while (j < size)
	{
		str = ft_strcat(str, strs[j]);
		if (j != size - 1)
			str = ft_strcat(str, sep);
		j++;
	}
	return (str);
}
