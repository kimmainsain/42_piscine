/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:32:38 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/07 14:27:34 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char t);
void	change(int i);

void	ft_putchar(char t)
{
	write(1, &t, 1);
}

void	change(int i)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			change(a);
			write(1, " ", 1);
			change(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
