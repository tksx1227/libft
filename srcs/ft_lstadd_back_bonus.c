/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:09:40 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/13 16:34:34 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next != NULL)
		p = p->next;
	p->next = new;
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
	ft_lstadd_back(pp, lst2);
	ft_lstadd_back(pp, lst3);
	p = *pp;
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
