/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:53:34 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 17:04:35 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_NUM '0'
#define MAX_NUM '9'

#define SPACES " \n\v\f\r\t"

static int	is_space(char c)
{
	unsigned int	i;

	i = 0;
	while (SPACES[i])
		if (c == SPACES[i++])
			return (1);
	return (0);
}

static int	is_number(char c)
{
	return (c >= MIN_NUM && c <= MAX_NUM);
}

int	ft_atoi(char *str)
{
	int	number;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	number = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (is_number(str[i]))
	{
		number *= 10;
		number += (str[i++] - 48);
	}
	return (sign * number);
}
