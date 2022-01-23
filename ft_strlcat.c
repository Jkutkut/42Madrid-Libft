/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:25:05 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/23 12:16:20 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	char		*dst_cpy;
	const char	*s;
	size_t		remanining;
	size_t		dlen;

	dst_cpy = dst;
	s = src;
	remanining = dst_size;
	while (remanining-- != 0 && *dst_cpy)
		dst_cpy++;
	dlen = dst_cpy - dst;
	remanining = dst_size - dlen;
	if (remanining == 0)
		return (dlen + ft_strlen(src));
	while (*s)
	{
		if (remanining != 1)
		{
			*dst_cpy++ = *s;
			remanining--;
		}
		s++;
	}
	*dst_cpy = '\0';
	return (dlen + (s - src));
}
