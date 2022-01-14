/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:52:22 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 13:56:03 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*temp;

	if (lst == NULL)
		return ;
	p = *lst;
	while (p != NULL)
	{
		temp = p->next;
		ft_lstdelone(p, del);
		p = temp;
	}
	*lst = NULL;
}

/*
int	main(void)
{
	t_list *lst1 = ft_lstnew("AAA");
	t_list *lst2 = ft_lstnew("BBB");
	t_list *lst3 = ft_lstnew("CCC");

	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);

	printf("----- Do not use heap area -----\n");
	printf("Free linear list\n");
	ft_lstclear(&lst1, NULL);
	printf("Done...\n");

	t_list *lst4 = ft_lstnew(ft_strdup("AAA"));
	t_list *lst5 = ft_lstnew(ft_strdup("BBB"));
	t_list *lst6 = ft_lstnew(ft_strdup("CCC"));

	ft_lstadd_back(&lst4, lst5);
	ft_lstadd_back(&lst4, lst6);

	printf("----- Use heap area -----\n");
	printf("Free linear list\n");
	ft_lstclear(&lst4, free);
	printf("Done...\n");

	printf("----- First arg is NULL -----\n");
	ft_lstclear(NULL, free);
	printf("Done...\n");

	return (0);
}
*/
