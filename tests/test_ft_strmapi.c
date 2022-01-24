/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:49:30 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/24 15:19:36 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <stdlib.h> // TODO DEBUG

#include "libft.h"

char	f1(unsigned int i, char c)
{
	i++;
	return (ft_toupper(c));
}

void	test(char *s, char (*f)(unsigned int, char))
{
	char	*str;
	printf("Test:\n");
	printf(" - Data  : *%s*\n", s);
	str = ft_strmapi(s, f);
	printf(" - Custom: \"%s\"\n", str);
	free(str);
}

int	main(void)
{
	test("hola que tal", f1);
}