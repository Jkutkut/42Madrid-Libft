/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:53:42 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:58:53 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is printable.
 * 
 * @param c Character to check.
 * @return int 0 if it is not printable, true otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
