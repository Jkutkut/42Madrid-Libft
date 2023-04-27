/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:54:46 by jre-gonz          #+#    #+#             */
/*   Updated: 2023/04/27 21:58:22 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACES " \n\v\f\r\t"

int	ft_hasany(const char *str, char c);
int	ft_isdigit(int c);

int	ft_isnbr(char *str)
{
	int	i;

	i = 0;
	while (ft_hasany(SPACES, str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!ft_isdigit(str[i++]))
		return (0);
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
