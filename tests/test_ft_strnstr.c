/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 17:39:42 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char *str, const char *c, size_t n)
{
	printf("Test: Data: \"%s\" toFind: %s, n: %lu\n", str, c, n);
	printf(" - Original: \"%s\"\n", strnstr(str, c, n));
	printf(" - Custom  : \"%s\"\n", ft_strnstr(str, c, n));	
}

int		main(void)
{
	test("Hola caracola", "c", 10);
	test("Hola caracola", "c", 2);
	test("ESTONO estosi:D", "e", 10);
	test("ESTONO estosi:D", "e", 6);
	test("ESTONO estosi:D", "e", 7);
	test("ESTONO estosi:D", "e", 8);
	test("hayvariasasenlafrase", "a", 5);
	test("no hay resultados en esta", "-", 25);
	test("no hay resultados en esta", "-", 50);
	printf("----------------------\n");
	test("Hola caracola", "cara", 13);
	test("Hola caracola", "cara", 10);
	test("ESTONO estosi:D", "est", 6);
	test("ESTONO estosi:D", "est", 7);
	test("ESTONO estosi:D", "est", 8);
}
