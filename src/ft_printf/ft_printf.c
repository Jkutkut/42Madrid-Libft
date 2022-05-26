/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:07:03 by jkutkut           #+#    #+#             */
/*   Updated: 2022/05/26 11:39:55 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_fd(int fd, const char *format, ...)
{
	va_list	argv;
	int		printed;

	if (format == NULL)
		return (-1);
	va_start(argv, format);
	printed = ft_format_printf(fd, format, argv);
	va_end(argv);
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	argv;
	int		printed;

	if (format == NULL)
		return (-1);
	va_start(argv, format);
	printed = ft_format_printf(FD, format, argv);
	va_end(argv);
	return (printed);
}
