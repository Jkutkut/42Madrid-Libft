/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:10:13 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 12:34:21 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // TODO DEBUG
#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char* str1, const char *str2)
{
	char*	str;
	printf("Data:\n - str1: \"%s\"\n - str2: \"%s\"\n", str1, str2);
	// str = strjoin(str1, str2);
	// printf(" - Original: \"%s\"\n", str);
	// free(str);
	str = ft_strjoin(str1, str2);
	printf(" - Custom  : \"%s\"\n", str);
	free(str);
}

int		main(void)
{
	test("hola", " que tal?");
	test(NULL, "hola");
	test("hola", NULL);
	test(NULL, NULL);
	test("", "");
	test("", "hola");
	test("hola", "");
}