/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 11:38:16 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // TODO DEBUG
#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char *str, unsigned int start, size_t len)
{
	char *s;

	printf("Test: Data: \"%s\" start: %d, len: %lu\n", str, start, len);
	// s = substr(str, c, n);
	// printf(" - Original: \"%s\"\n", s);
	// free(s);
	s = ft_substr(str, start, len);
	printf(" - Custom  : \"%s\"\n", s);
	free(s);
}

int		main(void)
{
	test("Hola caracola", 0, 2);
	test("Hola caracola", 1, 2);
	test("ESTONO estosi:D", 7, 200);
	test("ESTONO estosi:D", 7, 0);
	test("thisshouldbenull", 300, 0);
	test("thisshouldbenull", 300, 1);
	test("thisshouldbenull", 300, 5);
}
