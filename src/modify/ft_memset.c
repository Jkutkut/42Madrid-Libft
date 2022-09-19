/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:01:01 by jkutkut           #+#    #+#             */
/*   Updated: 2022/03/20 15:48:14 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Sets the first n bytes of the memory area pointed by s to c.
 * 
 * @param s Pointer to the memory area.
 * @param c Character to set.
 * @param n Number of bytes to set.
 * @return void* Same pointer as s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = (char) c;
	return (s);
}
