/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:56:33 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 13:40:35 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

/**
 * @brief Returns a pointer to the last occurrence of the character c in s.
 * 
 * @param s String to search.
 * @param c Character to search.
 * @return char* Pointer to the last occurrence of the character c in s.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	cc = (char)c;
	i = ft_strlen(s);
	while (i > 0 && *(s + i) != cc)
		i--;
	if (*(s + i) == cc)
		return ((char *) s + i);
	return (NULL);
}
