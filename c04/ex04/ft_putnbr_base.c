/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:58:10 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/16 15:23:38 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_exception(char *str)
{
	int	i;
	int	j;
	int	a;

	a = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || a == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		exception;
	long	number;

	exception = ft_exception(base);
	len = ft_strlen(base);
	number = nbr;
	if (exception == 1)
	{
		if (number < 0)
		{
			ft_putchar('-');
			number = -number;
		}
		if (number < len)
			ft_putchar(base[number]);
		if (number >= len)
		{
			ft_putnbr_base(number / len, base);
			ft_putnbr_base(number % len, base);
		}
	}
}
