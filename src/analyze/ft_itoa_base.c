/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:38:02 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 11:01:43 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_ndigits_base(ssize_t n, size_t base_len);

/**
 * @brief Returns a string representation of an integer in the base given.
 * 
 * @param n Integer to represent.
 * @return char* String representation of the integer.
 */
char	*ft_itoa_base(ssize_t nbr, char *base)
{
	size_t	b_len;
	size_t	order;
	char	*str;
	char	sign;

	b_len = ft_strlen(base);
	order = ft_ndigits_base(nbr, b_len);
	str = (char *) malloc(sizeof(char) * (order + 1));
	if (str == NULL)
		return (str);
	str[order--] = '\0';
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		str[0] = '-';
	}
	if (nbr == 0)
		str[order] = '0';
	while (nbr != 0)
	{
		str[order--] = base[((ssize_t) nbr % b_len) * sign];
		nbr /= b_len;
	}
	return (str);
}
