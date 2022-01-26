/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:44:45 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/26 15:19:59 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char *str, char c)
{
	char	**arr;
	size_t	i;
	printf("Test:\n - Data: \"%s\"\n - sep: '%c'\n", str, c);
	arr = ft_split(str, c);
	if (arr != NULL)
	{
		i = 0;
		printf(" - Result: ");
		while (arr[i] != NULL)
			printf("\"%s\" ", arr[i++]);
		printf("\n");
		ft_freearr(arr);
	}
	else
		printf(" - Result: NULL\n");
}

int		main(void)
{
	test("hola que  tal", ' ');
	test("   hola   que tal    ", '-');
	test("", ' ');
	test("ssssssss", 's');
	test("ssss ssss", 's');
	test("ssss s sss", 's');
	test(NULL, ' ');
}