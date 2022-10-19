/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ndigits_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:41:50 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 07:58:23 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Returns the number of digits needed to represent the given number
 * in base base_len.
 * 
 * @param n Number to represent.
 * @return size_t Number of digits to represent it.
 */
size_t	ft_ndigits_base(ssize_t n, size_t base_len)
{
	size_t	order;

	if (base_len == 0)
		return (0);
	if (!n)
		return (1);
	order = 0;
	if (n < 0)
		order++;
	while (n != 0)
	{
		order++;
		n /= base_len;
	}
	return (order);
}
