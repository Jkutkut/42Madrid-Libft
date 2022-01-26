/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:20:17 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/26 17:06:10 by jre-gonz         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	len;
	size_t	i;
	size_t	start;

	if (s == NULL)
		return (NULL);
	len = ft_countelements(s, c);
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	arr[len] = NULL;
	len = 0;
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
		arr[len++] = ft_substr(s, start, i - start);
		if (arr[len - 1] == NULL)
			return (ft_freesplit(arr));
	}
	return (arr);
}
