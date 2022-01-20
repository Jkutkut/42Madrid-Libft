/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:32:48 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 18:38:11 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char* p;
	size_t i;

	p = malloc(count * size);
	if (p != NULL)
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = 0;
	}
	return p;
}