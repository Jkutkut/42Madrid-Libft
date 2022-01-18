/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:21:02 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 17:48:24 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <ctype.h>

int		ft_isalpha(int c);

void	test(int d)
{
	printf("Data: \"%c\"\n", d);
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
}
