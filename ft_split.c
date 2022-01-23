/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:20:17 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/23 19:46:40 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // TODO DEBUG
#include <stdlib.h>

void	ft_freearr(char **arr);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);

static char	**ft_freesplit(char **split)
{
	ft_freearr(split);
	return (NULL);
}

static size_t ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
		if (s[i++] == c)
			count++;
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	start;
	size_t	index;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_countwords(s, c);
	arr = malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return ft_freesplit(arr);
	arr[size] = NULL;
	if (size == 0)
		return (arr);
	i = 0;
	start = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			arr[index] = ft_substr(s, start, i - start);
			if (arr[index++] == NULL)
				return (ft_freesplit(arr));
			start = i + 1;
		}
		i++;
	}
	arr[index] = ft_substr(s, start, i - start);
	if (arr[index++] == NULL)
		return (ft_freesplit(arr));
	return (arr);
}
