/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 15:37:41 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(char *s1, char *s2, size_t n) {
	printf("Test:\n - s1: \"%s\"\n - s2: \"%s\"\n - n: %lu\n", s1, s2, n);
	printf("og: %i\n", strncmp(s1, s2, n));
	printf("ft: %i\n\n", ft_strncmp(s1, s2, n));
}

int main()
{
	test("Hola", "Hola", 4);
	test("Holaaa", "Hola", 4);
	test("Hola", "Holaaaa", 5);
	test("", "Hola", 3);
	test("Hey", "", 2);
	test("", "", 10);
}
