/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:04:13 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/25 18:21:54 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n);
void ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char *nb;

	nb = ft_itoa(n);
	ft_putstr_fd(nb, fd);
	free(nb);
}