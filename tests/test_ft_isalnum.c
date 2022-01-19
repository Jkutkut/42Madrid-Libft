/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 18:12:02 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_isdigit.c"
#include "ft_isalpha.c"
#include <ctype.h>

int		ft_isalnum(int c);

void	test(int d)
{
	printf("Data: %c\n", d);
	printf(" - Original: %i\n", isalnum(d));
	printf(" - Custom  : %i\n", ft_isalnum(d));
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
}
