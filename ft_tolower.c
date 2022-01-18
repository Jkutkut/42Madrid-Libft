/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:24:56 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 16:26:37 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


static int	is_upper(char c)
{
	return (c >= 'Z' && c <= 'A');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
