/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:29:11 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 13:38:22 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c);

/**
 * @brief Upper-cases a character.
 * 
 * @param c Character to convert.
 * @return int Converted character.
 */
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
