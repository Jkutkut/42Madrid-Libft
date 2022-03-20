/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:03:54 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/03/20 15:54:56 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates a linked list, running f on each element.
 * 
 * @param lst Linked list.
 * @param f Function to run on each element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	if (lst->content != NULL)
		f(lst->content);
	if (lst->next != NULL)
		ft_lstiter(lst->next, f);
}
