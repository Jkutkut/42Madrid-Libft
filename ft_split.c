/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:20:17 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 23:17:53 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);

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
