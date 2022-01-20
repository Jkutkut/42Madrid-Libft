/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 16:32:39 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char*	p;

	p = (unsigned char*) s;
	while (*p && *p != (unsigned char) c && --n > 0)
	{
		p++;
	}
	if (*p == (unsigned char) c)
		return (p);
	return (NULL);
}