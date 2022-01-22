/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 16:04:34 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char *str, const char *c)
{
	printf("Test:\n - Data: \"%s\"\n - toTrim: \"%s\"\n", str, c);
	printf(" - Custom  : \"%s\"\n", ft_strtrim(str, c));	
}

int		main(void)
{
	test("Hola caracola", "-");
	test("-Hola caracola-", "-");
	test("--Hola caracola--", "-");
	test("*******Hola caracola", "*******");
	test("Hola caracola*******", "*******");
	test(NULL, "-");
	test("-hola-", NULL);
	test("", "-");
	test("hola", "");
}
