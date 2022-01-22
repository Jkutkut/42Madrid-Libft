/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:08:15 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 16:00:22 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char* s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	start;

	if (s1 == NULL || set == NULL)
		return ((char *) s1);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = 0;
	if (ft_strncmp(s1, set, set_len) == 0)
		start = set_len;
	if (ft_strncmp(s1 + s1_len - set_len, set, set_len) == 0)
		s1_len -= set_len;
	return (ft_substr(s1, start, s1_len));
}