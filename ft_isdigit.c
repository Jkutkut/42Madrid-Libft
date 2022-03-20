/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:59:33 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is a digit.
 * 
 * @param c Character to check.
 * @return int 0 if it is not a digit, true otherwise.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
