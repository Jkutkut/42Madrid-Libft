/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 18:53:20 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char* src, char* cpy_og, char* cpy_cs, size_t size)
{
	
	printf("Data: \"%s\"\n", src);
	printf(" - Size: %lu\n", size);
	memmove(cpy_og, src, size);
	printf(" - Original: \"%s\"\n", cpy_og);
	ft_memmove(cpy_cs, src, size);
	printf(" - Custom  : \"%s\"\n", cpy_cs);
}

int		main(void)
{
	char cpy_og[256];
	char cpy_cs[256];
	test("hola que tal", cpy_og, cpy_cs, 4);

	test(cpy_cs, cpy_og + 1, cpy_cs, 6);

	char tOg[] = {67, 68, 67, 68, 69, 0, 45};
	printf("Data: \"%s\"\n", tOg);
	memmove(tOg + 1, tOg, 2);
	printf(" - Original: \"%s\"\n", tOg);

	char tcs[] = {67, 68, 67, 68, 69, 0, 45};
	memmove(tcs + 1, tcs, 2);
	printf(" - Custom  : \"%s\"\n", tcs);

	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	printf("og: %d cs: %d \n", memcmp(tOg, sResult2, 7), memcmp(tcs, sResult2, 7));

}
