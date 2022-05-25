/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:21:44 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:28:16 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

/**
 * @brief Copies up to size characters from src to dst.
 * 
 * @param dst Destination string.
 * @param src Source string.
 * @param size Maximum number of characters to copy.
 * @return size_t Number of characters copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;

	i = 0;
	dst_l = ft_strlen(src);
	if (size == 0)
		return (dst_l);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst_l);
}
