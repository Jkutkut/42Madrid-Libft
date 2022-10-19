/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:07:03 by jkutkut           #+#    #+#             */
/*   Updated: 2022/10/19 09:23:11 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_number(int fd, char type, va_list lst)
{
	char	*str;
	int		i;

	if (type == 'u')
		str = ft_itoa_base(va_arg(lst, unsigned int), DECIMAL);
	else if (ft_hasany("Xx", type))
	{
		str = ft_itoa_base(va_arg(lst, unsigned int), HEXADECIMAL);
		if (type == 'X')
			ft_strtoupper(str);
	}
	else
		str = ft_itoa_base(va_arg(lst, int), DECIMAL);
	i = ft_putstr_fd_l(str, fd);
	free(str);
	return (i);
}

static int	ft_print_argv(int fd, const char **format, va_list lst)
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

static int	ft_format_printf(int fd, const char *format, va_list lst)
{
	int	i;
	int	l;

	i = 0;
	while (*format)
	{
		l = 0;
		while (format[l] && format[l] != '%')
			l++;
		write(fd, format, l);
		format += l;
		i += l;
		if (*format == '\0')
			return (i);
		i += ft_print_argv(fd, &format, lst);
	}
	return (i);
}

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
