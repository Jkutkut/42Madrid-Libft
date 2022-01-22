/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 19:30:42 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char c);
int	ft_isupper(char c);

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
