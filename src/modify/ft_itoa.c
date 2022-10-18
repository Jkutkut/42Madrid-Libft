/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:46 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/18 17:50:27 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_ndigits(int n);

/**
 * @brief Returns a string representation of an integer.
 * 
 * @param n Integer to represent.
 * @return char* String representation of the integer.
 */
char	*ft_itoa(int n)
{
	size_t	order;
	char	d;
	char	*str;

	order = ft_ndigits(n);
	str = (char *) malloc(sizeof(char) * (order + 1));
	if (str == NULL)
		return (NULL);
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
