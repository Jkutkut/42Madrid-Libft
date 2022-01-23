/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 23:19:12 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

size_t strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}



#include "libft.h"

#define EMPTY_STRING "Original str goes here\0--------------------------------"

void	test(const char *dst, const char* src,
			 char* cpy_og, char* cpy_cs, size_t size)
{
	ft_strlcpy(cpy_og, dst, ft_strlen(dst) + 1);
	ft_strlcpy(cpy_cs, dst, ft_strlen(dst) + 1);
	printf("Data:\n - dst: \"%s\"\n - src: \"%s\"\n", dst, src);
	printf(" - Size: %lu\n", size);
	int ogL = strlcat(cpy_og, src, size);
	printf(" - Original: \"%s\" -> %i\n", cpy_og, ogL);
	int csL = ft_strlcat(cpy_cs, src, size);
	printf(" - Custom  : \"%s\" -> %i\n", cpy_cs, csL);
}

int		main(void)
{
	char cpy_og[256];
	char cpy_cs[256];
	test("01234567890123456789", "hola que tal", cpy_og, cpy_cs, 4);
	test("01234567890123456789", "", cpy_og, cpy_cs, 4);
	test("", "hola", cpy_og, cpy_cs, 0);
	test("aaaa", "hola", cpy_og, cpy_cs, 1);
}
