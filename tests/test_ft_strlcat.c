/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 09:52:05 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

#define EMPTY_STRING "Original str goes here\0--------------------------------"

void	test(const char* src, char* cpy_og, char* cpy_cs, size_t size)
{
	ft_strlcpy(cpy_og, EMPTY_STRING, ft_strlen(EMPTY_STRING));
	ft_strlcpy(cpy_cs, EMPTY_STRING, ft_strlen(EMPTY_STRING));
	printf("Data: \"%s\"\n", src);
	printf(" - Size: %lu\n", size);
	strlcat(cpy_og, src, size);
	printf(" - Original: \"%s\"\n", cpy_og);
	ft_strlcat(cpy_cs, src, size);
	printf(" - Custom  : \"%s\"\n", cpy_cs);
}

int		main(void)
{
	char cpy_og[256];
	char cpy_cs[256];
	test("hola que tal", cpy_og, cpy_cs, 4);
	test("", cpy_og, cpy_cs, 4);
	test("hola", cpy_og, cpy_cs, 0);
	test("hola", cpy_og, cpy_cs, 1);
}
