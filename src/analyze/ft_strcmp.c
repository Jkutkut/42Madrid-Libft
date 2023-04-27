/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:03:36 by jre-gonz          #+#    #+#             */
/*   Updated: 2023/04/27 22:25:41 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Same functionallity as ft_strncmp with the convenience of guessing
 * the amount of characters to compare.
 * 
 * @note Be sure to check for NULL pointers. Otherwise, -1 will be returned.
 * 
 * @param s1 String to compare.
 * @param s2 String to compare.
 * @return int 0 if the strings are equal, a positive number if s1 is greater
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (-1);
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
