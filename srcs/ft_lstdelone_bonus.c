/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:19:22 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 14:00:57 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
}

/*
int	main(void)
{
	t_list *lst1 = ft_lstnew("AAA");
	t_list *lst2 = ft_lstnew(ft_strdup("BBB"));

	printf("lst1's content: %s\n", (char *)lst1->content);
	printf("lst2's content: %s\n", (char *)lst2->content);

	printf("----- Do not use heap area -----\n");
	printf("Free an element\n");
	ft_lstdelone(lst1, NULL);
	printf("Done...\n");

	printf("----- Use heap area -----\n");
	printf("Free an element\n");
	ft_lstdelone(lst2, free);
	printf("Done...\n");

	printf("----- Arg is NULL -----\n");
	ft_lstdelone(NULL, NULL);
	printf("Done...\n");

	return (0);
}
*/
