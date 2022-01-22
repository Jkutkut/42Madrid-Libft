/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:56:33 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 21:04:14 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

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
