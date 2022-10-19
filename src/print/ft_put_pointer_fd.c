/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:44:53 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:53:55 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a pointer into a file descriptor.
 * 
 * @param p Pointer to write.
 * @param fd File descriptor.
 */
size_t	ft_put_pointer_fd(unsigned long p, int fd)
{
	char	*str;
	size_t	i;

	if (NULL_P && !p)
		return (ft_putstr_fd_l(NULL_P, fd));
	str = ft_ptoa_base(p, HEXADECIMAL);
	i = ft_putstr_fd_l("0x", fd);
	i += ft_putstr_fd_l(str, fd);
	free(str);
	return (i);
}
