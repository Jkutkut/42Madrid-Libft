/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:41:51 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/05/06 16:25:24 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_print_number(int fd, char type, va_list lst)
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
