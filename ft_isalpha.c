/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 10:00:21 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islowercase(char c);
int	ft_isuppercase(char c);

int	ft_isalpha(int c)
{
	return (ft_isuppercase(c) || ft_isuppercase(c));
}
