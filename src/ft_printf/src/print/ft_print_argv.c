/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:24 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/05/06 16:25:24 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_print_argv(int fd, const char **format, va_list lst)
{
	int		i;

	if (*++(*format) == 'c')
		i = ft_putchar_fd_l(va_arg(lst, int), fd);
	else if (**format == 's')
		i = ft_putstr_fd_l(va_arg(lst, char *), fd);
	else if (**format == 'p')
		i = ft_put_pointer_fd(va_arg(lst, unsigned long), fd);
	else if (ft_hasany("iduxX", **format))
		i = ft_print_number(fd, **format, lst);
	else
		i = ft_putchar_fd_l('%', fd);
	(*format)++;
	return (i);
}
