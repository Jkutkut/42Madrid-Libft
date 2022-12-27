/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 20:17:48 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

void	test(const char *str, int c, size_t n)
{
	printf("Test: Data: \"%s\" Char: %i (%c), n: %lu\n", str, c, c, n);
	printf(" - Original: \"%s\"\n", (char *) memchr(str, c, n));
	printf(" - Custom  : \"%s\"\n", (char *) ft_memchr(str, c, n));
}

int		main(void)
{
	test("Hola caracola", 'c', 10);
	test("Hola caracola", 'c', 2);
	test("ESTONO estosi:D", ' ', 10);
	test("ESTONO estosi:D", ' ', 6);
	test("ESTONO estosi:D", ' ', 7);
	test("ESTONO estosi:D", ' ', 8);
	test("hayvariasasenlafrase", 'a', 5);
	test("no hay resultados en esta", '-', 25);
	test("no hay resultados en esta", '-', 50);
}
