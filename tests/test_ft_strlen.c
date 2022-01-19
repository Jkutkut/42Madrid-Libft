/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                  :+:      :+:    :+:   */
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


void	test(const char* str)
{
	printf("Data: \"%s\"\n", str);
	printf(" - Original: %lu\n", strlen(str));
	printf(" - Custom  : %lu\n", ft_strlen(str));
}

int		main(void)
{
	test("");
	test("Hola");
	test("Que tal");
	test("a fs  sf fds ");
	test(" fs dsf \0 fs");
}
