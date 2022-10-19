/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:43:18 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 11:43:58 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees the memory of a string array.
 * 
 * @param arr String array to free.
 * @return char** Returns always NULL.
 */
char	**ft_free_array(char **arr)
{
	size_t	i;

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}
