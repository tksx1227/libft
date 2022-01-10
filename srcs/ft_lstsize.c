/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:59:00 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 23:50:25 by ttomori          ###   ########.fr       */
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
	t_list *temp;
	t_list **pp;
	t_list *p;

	pp = &lst1;
	ft_lstadd_front(pp, lst2);
	ft_lstadd_front(pp, lst3);
	ft_lstadd_front(pp, lst4);
	p = *pp;

	int size = ft_lstsize(p);
	printf("size = %d\n", size);
	for (int i = 0; p != NULL; i++)
	{
		printf("%d. Content: \"%s\"\n", i, (char *)p->content);
		p = p->next;
	}

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
