/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:46 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 23:11:54 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_ndigits(int n)
{
	size_t	order;

	if (!n)
		return (1);
	order = 0;
	if (n < 0)
		order++;
	while (n != 0)
	{
		order++;
		n /= 10;
	}
	return (order);
}

char	*ft_itoa(int n)
{
	size_t	order;
	char	d;
	char	*str;

	order = ft_ndigits(n);
	str = (char *) malloc(sizeof(char) * (order + 1));
	if (str == NULL)
		return (str);
	str[order] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[--order] = '0';
	while (n != 0)
	{
		d = n % 10;
		if (d < 0)
			d = -d;
		str[--order] = d + '0';
		n /= 10;
	}
	return (str);
}
