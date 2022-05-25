/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:59:59 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c);
int	ft_isupper(int c);

/**
 * @brief Checks if the given character is alphabetic.
 * 
 * @param c Character to check.
 * @return int 0 if it is not alphabetic, true otherwise.
 */
int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
