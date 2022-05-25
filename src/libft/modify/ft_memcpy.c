/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:13:36 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:49:29 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *source, size_t n);

/**
 * @brief Copies n bytes from source to dest usign memmove.
 * 
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return void* Same pointer as dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	return (ft_memmove(dest, src, n));
}
