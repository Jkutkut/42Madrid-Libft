/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:54:24 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:51:51 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a character to a file descriptor.
 * 
 * @param c Character to write.
 * @param fd File descriptor.
 * @return Amount of files printed.
 */
size_t	ft_putchar_fd_l(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
