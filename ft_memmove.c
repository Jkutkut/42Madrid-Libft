/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:13:36 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 19:22:43 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src;

	if (n == 0 || dest == source)
		return (dest);
	dst = (unsigned char *) dest;
	src = (const unsigned char *) source;
	if (dst > src)
		while (n-- > 0)
			*(dst + n) = *(src + n);
	else
		while (n-- > 0)
			*dst++ = *src++;
	return (dest);
}
