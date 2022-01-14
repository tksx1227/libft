/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:09:40 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 14:08:49 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	last = ft_lstlast(*lst);
	if (last == NULL)
		*lst = new;
	else
		last->next = new;
}

/*
static void	print_list_content(t_list *lst)
{
	for (int i = 0; lst != NULL; i++)
	{
		printf("[%d] Content: %s\n", i, (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list *lst1 = ft_lstnew("HEAD");
	t_list *lst2 = ft_lstnew("AAA");
	t_list *lst3 = ft_lstnew("BBB");
	t_list *lst4 = ft_lstnew("TAIL");

	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	ft_lstadd_back(&lst1, NULL);
	ft_lstadd_back(&lst1, NULL);

	print_list_content(lst1);

	ft_lstclear(&lst1, NULL);

	return (0);
}
*/
