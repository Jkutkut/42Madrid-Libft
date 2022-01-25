/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:45:25 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/25 18:18:59 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);


void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	str = ft_strdup(s);
	if (str == NULL)
		return ;
	i = 0;
	while (i < len)
	{
		f(i, &str[i]);
		i++;
	}
}
