/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsupki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:14:25 by minsupki          #+#    #+#             */
/*   Updated: 2022/02/13 17:20:32 by minsupki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == 0)
			return (str);
		str++;
	}
	return (0);
}
