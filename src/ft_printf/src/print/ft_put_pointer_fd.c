/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:44:53 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/05/06 16:25:24 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

static size_t	ft_plen(unsigned long n, long base_len)
{
	size_t	order;

	if (base_len <= 0)
		return (0);
	if (!n)
		return (1);
	order = 0;
	while (n != 0)
	{
		order++;
		n /= base_len;
	}
	return (order);
}

static char	*ft_ptoa(unsigned long nbr, char *base)
{
	long	b_len;
	size_t	order;
	char	*str;

	b_len = ft_strlen(base);
	order = ft_plen(nbr, b_len);
	str = (char *) malloc(sizeof(char) * (order + 1));
	if (str == NULL)
		return (str);
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

size_t	ft_put_pointer_fd(unsigned long p, int fd)
{
	char	*str;
	size_t	i;

	if (NULL_P && !p)
		return (ft_putstr_fd_l(NULL_P, fd));
	str = ft_ptoa(p, HEXADECIMAL);
	i = ft_putstr_fd_l("0x", fd);
	i += ft_putstr_fd_l(str, fd);
	free(str);
	return (i);
}
