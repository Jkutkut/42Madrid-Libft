/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:21:02 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 17:52:06 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <ctype.h>

int		ft_isdigit(int c);

void	test(int d)
{
	printf("Data: %c\n", d);
	printf(" - Original: %i\n", isdigit(d));
	printf(" - Custom  : %i\n", ft_isdigit(d));
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
