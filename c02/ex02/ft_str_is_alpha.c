/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:22:43 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/09 17:34:51 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			count = 1;
		else if (str[i] < 'a' && str[i] > 'Z')
			count = 1;
		i++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}
