/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 18:12:02 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"


void	test(const char* src, size_t size)
{
	char cpy_og[256];
	char cpy_cs[256];
	printf("Data: \"%s\"\n", src);
	printf(" - Size: %lu\n", size);
	strlcpy(cpy_og, src, size);
	printf(" - Original: \"%s\"\n", cpy_og);
	ft_strlcpy(cpy_cs, src, size);
	printf(" - Custom  : \"%s\"\n", cpy_cs);
}

int		main(void)
{
	test("hola que tal", 4);
}
