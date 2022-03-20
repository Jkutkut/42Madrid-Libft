/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:56:33 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:36:37 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Returns a pointer to the first occurrence of the character c in the
 * string s.
 * 
 * @param s String to search.
 * @param c Character to search for.
 * @return char* Pointer to the occurrence or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char) c;
	while (*s && *s != cc)
		s++;
	if (*s == cc)
		return ((char *) s);
	return (NULL);
}
