/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:20:17 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:42:47 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);

/**
 * @brief Frees the memory of a string array.
 * 
 * @param arr String array to free.
 * @return char** Returns always NULL.
 */
static char	**ft_freesplit(char **arr)
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

/**
 * @brief Calculates the number of elements of a array resulting from a split.
 * 
 * @param s String to split.
 * @param c Character as delimeter.
 * @return size_t Number of elements.
 */
static size_t	ft_countelements(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (s == NULL)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

/**
 * @brief Allocates the requiered memory for a string array.
 * 
 * @param s String to split.
 * @param c Character as delimeter.
 * @return char** String array pointer.
 */
static char	**init_split(char const *s, char c)
{
	char	**arr;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_countelements(s, c);
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	arr[len] = NULL;
	return (arr);
}

/**
 * @brief Splits a string into an array of strings using a delimiter.
 * The resulting array is terminated with a NULL pointer.
 * If consecutive dilimiters occur, a empty/NULL elemente is not inserted.
 * 
 * @param s String to split.
 * @param c Delimiter.
 * @return char** Array of strings NULL terminated.
 */
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	index;
	size_t	i;
	size_t	start;

	arr = init_split(s, c);
	if (arr == NULL)
		return (NULL);
	index = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[index++] = ft_substr(s, start, i - start);
		if (arr[index - 1] == NULL)
			return (ft_freesplit(arr));
	}
	return (arr);
}
