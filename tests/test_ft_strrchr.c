/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:23 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 15:21:00 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <string.h> // TODO DEBUG

#include "libft.h"

void	test(const char *str, int d)
{	
	printf("Test: Data: \"%s\" Char: %i (%c)\n", str, d, d);
	printf(" - Original: \"%s\"\n", strrchr(str, d));
	printf(" - Custom  : \"%s\"\n", ft_strrchr(str, d));	
}

int		main(void)
{
	test("Hola caracola", 'c');
	test("ESTOsi estono:D", ' ');
	test("hayvariasasenlafrase", 'a');
	test("no hay resultados en esta", '-');
}
