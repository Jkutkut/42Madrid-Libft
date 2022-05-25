/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:19:46 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:59:04 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is lowercase.
 * 
 * @param c Character to check.
 * @return int 0 if it is not lowercase, true otherwise.
 */
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
