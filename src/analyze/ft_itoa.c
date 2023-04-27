/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:46 by jre-gonz          #+#    #+#             */
/*   Updated: 2023/04/27 22:52:26 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_ndigits(int n);
void	*ft_calloc(size_t count, size_t size);

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
	str = (char *) ft_calloc(order + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
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
