/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:56:33 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 20:38:11 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char cc;

	cc = (char) c;
	while (*s && *s != cc)
		s++;
	if (*s == cc)
		return ((char *) s);
	return (NULL);
}
