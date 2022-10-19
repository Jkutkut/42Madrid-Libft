/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pdigits_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:58:04 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:48:03 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Obtain the number of characters needed to represent the given
 * pointer in the given base.
 *
 * @param n pointer to represent.
 * @param base_len length of the base.
 * @return size_t Number of characters needed.
 */
size_t	ft_pdigits_base(unsigned long n, long base_len)
{
	size_t	order;

	if (base_len <= 0)
		return (0);
	if (!n)
		return (1);
	order = 0;
	while (n != 0)
	{
		order++;
		n /= base_len;
	}
	return (order);
}
