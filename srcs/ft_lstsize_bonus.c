/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:59:00 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 13:35:39 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*
int	main(void)
{
	t_list *lst1 = ft_lstnew("AAA");
	t_list *lst2 = ft_lstnew("BBB");
	t_list *lst3 = ft_lstnew("CCC");
	t_list *lst4 = ft_lstnew("DDD");

	printf("Size: %d\n", ft_lstsize(lst1));

	printf("Add one element...\n");
	ft_lstadd_back(&lst1, lst2);
	printf("Size: %d\n", ft_lstsize(lst1));

	printf("Add one element...\n");
	ft_lstadd_back(&lst1, lst3);
	printf("Size: %d\n", ft_lstsize(lst1));

	printf("Add one element...\n");
	ft_lstadd_back(&lst1, lst4);
	printf("Size: %d\n", ft_lstsize(lst1));

	printf("Remove elements...\n");
	ft_lstclear(&(lst1->next), NULL);
	printf("Size: %d\n", ft_lstsize(lst1));

	ft_lstclear(&lst1, NULL);

	return (0);
}
*/
