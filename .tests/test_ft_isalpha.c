/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 19:29:58 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <ctype.h> // TODO DEBUG

#include "libft.h"

void	test(int d)
{
	printf("Char: %i\n", d);
	printf(" - Original: %i\n", isalpha(d));
	printf(" - Custom  : %i\n", ft_isalpha(d));
}

int		main(void)
{
	test('c');
	test(' ');
	test('a');
	test('A');
	test('Z');
	test('M');
	test('a');
	test('z');
	test('@');
	test('.');
	test('0');
	test('9');
	test('5');
	test(0);
	test(-2);
	test(128);
	test(-323);
}
