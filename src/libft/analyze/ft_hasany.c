/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:15:56 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 16:01:02 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Checks if the given char c is any of the chars in the given string.
 * 
 * @param str String to check.
 * @param c Character to check.
 * @return int 0 if it is not any of the chars in the string, 1 otherwise.
 */
int	ft_hasany(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
		if (c == str[i++])
			return (1);
	return (0);
}
