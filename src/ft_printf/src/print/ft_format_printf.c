/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:44:10 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/04/26 13:54:45 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_format_printf(int fd, const char *format, va_list lst)
{
	int	i;
	int	j;

	i = 0;
	while (*format)
	{
		j = ft_print_until_format(fd, &format);
		if (j < 0)
			return (i);
		i += j;
		if (*format == '\0')
			return (i);
		i += ft_print_argv(fd, &format, lst);
	}
	return (i);
}
