/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkutkut <jre-gonz@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:01:01 by jkutkut           #+#    #+#             */
/*   Updated: 2022/01/18 09:52:20 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Empties the given memory area.
 * 
 * @param s Memory area.
 * @param n Number of bytes to empty.
 * @return void* Pointer to the memory area (same as input).
 */
void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = '\0';
	return (s);
}
