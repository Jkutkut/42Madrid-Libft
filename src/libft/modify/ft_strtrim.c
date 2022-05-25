/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:08:15 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 13:39:59 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_hasany(const char *str, char c);

/**
 * @brief Removes any character in set from the beginning and end of a string.
 * 
 * @param s1 String to trim.
 * @param set Set of characters to remove.
 * @return char* Trimmed string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;

	if (s1 == NULL || set == NULL)
		return ((char *) s1);
	s1_len = ft_strlen(s1);
	start = 0;
	while (ft_hasany(set, s1[start]) && start < s1_len)
		start++;
	while (ft_hasany(set, s1[s1_len - 1]) && start < s1_len)
		s1_len--;
	return (ft_substr(s1, start, s1_len - start));
}
