/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:18:15 by jre-gonz          #+#    #+#             */
/*   Updated: 2023/04/27 22:52:49 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);

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
	str = (char *) ft_calloc(order + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[order--] = '\0';
	if (nbr == 0)
		str[0] = base[0];
	while (nbr != 0)
	{
		str[order--] = base[nbr % b_len];
		nbr /= b_len;
	}
	return (str);
}
