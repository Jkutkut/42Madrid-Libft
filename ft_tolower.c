/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:24:56 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 10:34:32 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isuppercase(char c);

int	ft_tolower(char c)
{
	if (ft_isuppercase(c))
		return (c + 32);
	return (c);
}