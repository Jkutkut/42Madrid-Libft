/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:00:36 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:46:46 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Prints the string s to the file descriptor fd with '\n' at the end.
 * 
 * @param s String to print.
 * @param fd File descriptor.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
