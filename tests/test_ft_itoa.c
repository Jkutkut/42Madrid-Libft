/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:01:17 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/23 20:20:56 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <stdlib.h> // TODO DEBUG

#include "libft.h"

void	test(int d)
{
	char *str;
	printf("Test:\n");
	printf(" - Data  : *%i*\n", d);
	str = ft_itoa(d);
	printf(" - Custom: \"%s\"\n", str);
	free(str);
}

int	main(void)
{
	test(0);
	test(1);
	test(-2147483648);
	test(-2147483647);
	test(2147483647);
	test(2147483648);
	test(123456789);
	test(-123456789);
}
