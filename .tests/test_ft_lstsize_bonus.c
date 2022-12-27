/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:27:54 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 18:21:12 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

	printf("%i\n", ft_lstsize(NULL));

	e = ft_lstnew("caracola");
	
	printf("%i\n", ft_lstsize(e));
	
	ft_lstadd_front(&e, ft_lstnew("Hola"));

	printf("%i\n", ft_lstsize(e));

	print_list(e);

	return (0);
}