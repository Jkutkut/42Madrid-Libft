/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:53:34 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 23:13:12 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <limits.h>

#define SPACES " \n\v\f\r\t"
#define NUMBERS "0123456789"

static int	ft_hasany(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
		if (c == str[i++])
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	size_t	number;
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	number = 0;
	while (ft_hasany(SPACES, str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (ft_hasany(NUMBERS, str[i]))
	{
		number *= 10;
		number += (str[i++] - 48);
	}
	if (number > LONG_MAX && sign < 0)
		return (0);
	else if (number > LONG_MAX && sign > 0)
		return (-1);
	return (sign * number);
}
