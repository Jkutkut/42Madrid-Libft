/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 22:05:33 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <stdlib.h> // TODO DEBUG

#include "libft.h"

void	test(const char *d)
{
	printf("Char: \"%s\"\n", d);
	printf(" - Original: %i\n", atoi(d));
	printf(" - Custom  : %i\n", ft_atoi(d));
}

int	main(void)
{
	test("  -2147483648");
	test(" -2147483647");
	test("	+2147483647");
	test("	+2147483648");
	test("\f\v\r\t\n-2");
	test("");
	test(NULL);
}
