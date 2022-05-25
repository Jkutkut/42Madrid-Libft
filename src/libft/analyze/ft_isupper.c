/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:21:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:58:37 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is uppercase.
 * 
 * @param c Character to check.
 * @return int 0 if it is not uppercase, true otherwise.
 */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
