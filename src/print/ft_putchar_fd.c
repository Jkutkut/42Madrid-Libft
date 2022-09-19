/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:54:24 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:46:58 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes a character to a file descriptor.
 * 
 * @param c Character to write.
 * @param fd File descriptor.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
