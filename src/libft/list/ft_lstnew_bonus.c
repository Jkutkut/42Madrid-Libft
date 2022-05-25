/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:59:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:52:01 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new element of a linked list and returns a pointer to it.
 * 
 * @param content Pointer to the content of the new element.
 * @return t_list* Pointer to the new element.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*e;

	e = malloc(sizeof(t_list));
	if (e == NULL)
		return (NULL);
	e->content = content;
	e->next = NULL;
	return (e);
}
