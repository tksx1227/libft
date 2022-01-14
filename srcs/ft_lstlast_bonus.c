/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:53:51 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 13:41:37 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list *lst1 = ft_lstnew("AAA");
	t_list *lst2 = ft_lstnew("BBB");
	t_list *lst3 = ft_lstnew("CCC");
	t_list *lst4 = ft_lstnew("DDD");

	// AAA -> BBB -> CCC -> DDD
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);

	t_list *last1 = ft_lstlast(lst1);
	t_list *last2 = ft_lstlast(lst2);
	printf("lst1's last Content: \"%s\"\n", (char *)last1->content);
	printf("lst2's last Content: \"%s\"\n", (char *)last2->content);

	ft_lstclear(&lst1, NULL);

	return (0);
}
*/
