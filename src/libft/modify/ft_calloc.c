/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:32:48 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 16:02:16 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Allocates (with malloc) and clears the requested amount of memory.
 * 
 * @param count Number of elements to allocate.
 * @param size Size of each element.
 * @return void* Pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = malloc(count * size);
	if (p != NULL)
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = 0;
	}
	return (p);
}
