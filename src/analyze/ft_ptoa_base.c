/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:18:15 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:42:16 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief itoa_base for pointers.
 *
 * @param nbr pointer.
 * @param base Base to use.
 * @return char* Pointer as a string.
 */
char	*ft_ptoa_base(unsigned long nbr, char *base)
{
	long	b_len;
	size_t	order;
	char	*str;

	b_len = ft_strlen(base);
	order = ft_pdigits_base(nbr, b_len);
	str = (char *) malloc(sizeof(char) * (order + 1));
	if (str == NULL)
		return (NULL);
	str[order--] = '\0';
	if (nbr == 0)
		str[order] = '0';
	while (nbr != 0)
	{
		str[order--] = base[nbr % b_len];
		nbr /= b_len;
	}
	return (str);
}
