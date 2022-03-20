/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:30:28 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 13:44:30 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Compares the first n characters of the strings s1 and s2.
 * If the strings are equal, 0 is returned.
 * If they are different, the difference between the first different char is
 * returned.
 * 
 * @param s1
 * @param s2
 * @param n Maximum number of characters to compare.
 * @return int Returns the comparison result.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char) s1[i] - s2[i]);
}
