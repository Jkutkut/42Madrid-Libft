/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:13:36 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/19 19:13:39 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strlen(const char* s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char *dst;
	const unsigned char *src;

	dst = dest;
	src = source;
	if (dst > src)
	{
		while (n-- > 0)
			*dst++ = *src++;
	}
	else
	{
		while (n-- > 0)
			*(dst + n) = *(src + n);
	}
	return (dest);
}