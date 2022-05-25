/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:53:42 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:59:45 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is ASCII.
 * 
 * @param c Character to check.
 * @return int 0 if it is not ASCII, true otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
