/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:03:47 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 12:56:58 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*e;
	if (lst == NULL || *lst == NULL)
		return ;
	e = *lst;
	if (e->next != NULL)
		ft_lstclear(&(e->next), del);
	if (e->content != NULL)
		ft_lstdelone(e, del);
	free(*lst);
	*lst = NULL;
}
