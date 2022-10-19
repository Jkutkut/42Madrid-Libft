/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:54:24 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:53:05 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a string to a file descriptor.
 * 
 * @param s String to write.
 * @param fd File descriptor.
 * @return Amount of characters printed.
 */
size_t	ft_putstr_fd_l(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		s = "(null)";
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
