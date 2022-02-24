/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:19:16 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/07 14:28:51 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	output(int size, char *arr)
{
	int	index;

	index = 0;
	while (index < size)
	{
		ft_putchar(arr[size - index - 1]);
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	change(int nb)
{
	int		ten;
	int		one;
	int		size;
	char	arr[10];

	size = 0;
	one = nb % 10;
	ten = nb;
	while (ten != 0)
	{
		arr[size] = one + '0';
		ten = ten / 10;
		one = ten % 10;
		size++;
	}
	output(size, arr);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		change(nb);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		change(nb);
}
