/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:18:41 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/14 11:33:02 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	somunja(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = a[i] + 32;
		i++;
	}
	return (*a);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	somunja(str);
	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 1)
			{
				str[i] = str[i] - 32;
				check = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			check = 0;
		else
			check = 1;
		i++;
	}
	return (str);
}
