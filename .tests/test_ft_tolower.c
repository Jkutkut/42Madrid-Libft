/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 10:34:44 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <ctype.h> // TODO DEBUG

#include "libft.h"

void	test(int d)
{
	int og = d;
	int ft = d;

	og = tolower(d);
	ft = ft_tolower(d);
	
	printf("Char: %i (%c)\n", d, d);
	printf(" - Original: %i (%c)\n", og, og);
	printf(" - Custom  : %i (%c)\n", ft, ft);	
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
