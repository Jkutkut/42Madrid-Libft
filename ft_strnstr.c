/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:46:39 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 21:48:30 by jre-gonz         ###   ########.fr       */
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
	while (str[i] && i < len)
	{
		if (str[i] == *needle)
		{
			j = 0;
			while (needle[j] && str[i + j] && i + j < len)
			{
				if (str[i + j] != needle[j])
					break ;
				j++;
			}
			if (!needle[j])
				return ((char *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
