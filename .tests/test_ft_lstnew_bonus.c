/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:27:54 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/27 18:01:15 by jre-gonz         ###   ########.fr       */
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
		// list = list->next;
		return ;
	}
}


int	main(void)
{
	t_list	*e;
	char	str[256] = "Hello";

	printf("%li", sizeof(t_list));
	e = ft_lstnew(str);
	if (e == NULL)
		printf("NULL pointer\n");
	else
		print_list(e);
	// if (ft_strncmp(e->content, "hola", 4) != 0)
	// 	printf("ERROR: content is not hola\n");
	return (0);
}