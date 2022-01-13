/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:53:51 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 00:54:54 by ttomori          ###   ########.fr       */
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
	t_list *temp;
	t_list **pp;
	t_list *p;

	pp = &lst1;
	ft_lstadd_front(pp, lst2);
	ft_lstadd_front(pp, lst3);
	p = *pp;
	for (int i = 0; p != NULL; i++)
	{
		printf("%d. Content: \"%s\"\n", i, (char *)p->content);
		p = p->next;
	}

	p = *pp;
	t_list *last = ft_lstlast(p);
	printf("Last Content: \"%s\"\n", (char *)last->content);

	p = *pp;
	while (p != NULL)
	{
		temp = p->next;
		free(p);
		p = temp;
	}

	return (0);
}
*/
