/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ndigits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:25:53 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/02/09 12:26:03 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_ndigits(int n)
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