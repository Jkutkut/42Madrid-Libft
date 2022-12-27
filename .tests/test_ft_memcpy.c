/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/12/27 09:39:42 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

void	test(const char* src, char* cpy_og, char* cpy_cs, size_t size)
{
	
	printf("Data: \"%s\"\n", src);
	printf(" - Size: %lu\n", size);
	memcpy(cpy_og, src, size);
	printf(" - Original: \"%s\"\n", cpy_og);
	ft_memcpy(cpy_cs, src, size);
	printf(" - Custom  : \"%s\"\n", cpy_cs);
}

int		main(void)
{
	char cpy_og[256];
	char cpy_cs[256];
	test("hola que tal", cpy_og, cpy_cs, 4);

	test(cpy_cs, cpy_og + 1, cpy_cs, 6);
}
