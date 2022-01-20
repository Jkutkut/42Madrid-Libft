/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:46:39 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 17:40:34 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *) str);
	i = 0;
	while (str[i] && len-- > 0)
	{
		if (str[i] == *needle)
		{
			j = 0;
			while (str[i + j] && needle[j] && str[i + j] == needle[j])
				j++;
			if (!needle[j])
				return ((char *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
