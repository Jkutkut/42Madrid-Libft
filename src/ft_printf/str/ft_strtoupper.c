/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:29:11 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/05/26 12:52:40 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_touppper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	ft_strtoupper(char *str)
{
	while (*str)
	{
		*str = ft_touppper(*str);
		str++;
	}
}
