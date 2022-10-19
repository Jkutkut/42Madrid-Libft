/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:17:01 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:50:59 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c);

/**
 * @brief Uppercase the given string.
 *
 * @brief str
 */
void	ft_strtoupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}
