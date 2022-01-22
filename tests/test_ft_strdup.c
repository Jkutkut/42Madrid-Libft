/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 11:47:26 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // TODO DEBUG
#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char* src)
{
	char*	str;
	printf("Data: \"%s\"\n", src);
	str = strdup(src);
	printf(" - Original: \"%s\"\n", str);
	free(str);
	str = ft_strdup(src);
	printf(" - Custom  : \"%s\"\n", str);
	free(str);
}

int		main(void)
{
	test("hola que tal");
	test(NULL);
}