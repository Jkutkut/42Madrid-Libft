/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 20:29:09 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
