/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:51:14 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Searches for the first occurrence of c in the first n bytes of the
 * memory area pointed by s.
 * 
 * @param s Pointer to the memory area.
 * @param c Character to search.
 * @param n Number of bytes to search.
 * @return void* Pointer to the first occurrence or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ucc;

	if (n == 0)
		return (NULL);
	str = (unsigned char *) s;
	ucc = (unsigned char) c;
	while (n--)
		if (*str++ == ucc)
			return (str - 1);
	return (NULL);
}
