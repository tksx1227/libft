/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:19:52 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 14:12:59 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || (*lst != NULL && new == NULL))
		return ;
	temp = *lst;
	*lst = new;
	ft_lstadd_back(lst, temp);
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
	t_list *lst1 = ft_lstnew("TAIL");
	t_list *lst2 = ft_lstnew("BBB");
	t_list *lst3 = ft_lstnew("AAA");
	t_list *lst4 = ft_lstnew("HEAD");

	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst1, lst3);
	ft_lstadd_front(&lst1, lst4);
	ft_lstadd_front(&lst1, NULL);

	print_list_content(lst1);

	ft_lstclear(&lst1, NULL);

	return (0);
}
*/
