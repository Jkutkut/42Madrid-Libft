/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:27:54 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 18:47:54 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // TODO DEBUG

void	print_list(t_list *list)
{
	printf("List:\n");
	while (list != NULL)
	{
		if (list->content != NULL)
			printf("%s\n", (char *)list->content);
		else
			printf("NULL\n");
		list = list->next;
	}
}


int	main(void)
{
	t_list	*e;

	e = ft_lstnew("caracola");
	
	ft_lstadd_front(&e, ft_lstnew("Hola"));
	ft_lstadd_front(&e, ft_lstnew("Que"));
	ft_lstadd_front(&e, ft_lstnew("Tal"));
	ft_lstadd_front(&e, ft_lstnew("Estas"));

	print_list(e);
	printf("--%s--\n", (char *) ft_lstlast(e)->content);

	return (0);
}