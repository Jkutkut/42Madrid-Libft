/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 18:12:02 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <ctype.h> // TODO DEBUG

#include "libft.h"

void	test(int d)
{
	printf("Char: %i (%c)\n", d, d);
	printf(" - Original: %i\n", isprint(d));
	printf(" - Custom  : %i\n", ft_isprint(d));
}

int		main(void)
{
	test('c');
	test(' ');
	test('a');
	test('A');
	test('Z');
	test('~');
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
