/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkutkut <jre-gonz@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:01:01 by jkutkut           #+#    #+#             */
/*   Updated: 2022/10/18 20:01:27 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Empties the given memory area.
 * 
 * @param s Memory area.
 * @param n Number of bytes to empty.
 * @return void* Pointer to the memory area (same as input).
 */
void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, '\0', n));
}
