/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 18:12:02 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"


void	test(void* s, int c, size_t n)
{
	printf("Data: \"%s\"\n", (char*) s);
	printf(" - C: %i (%c), size: %lu\n", c, c, n);
	printf(" - Original: %s\n", memset(s, c, n));
	printf(" - Custom  : %s\n", (char*) ft_memset(s, c, n));
}

int		main(void)
{
	char str[256] = "holaquetal";
	test(str, 97, 4);
}
