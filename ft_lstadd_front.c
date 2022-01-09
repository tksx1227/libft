/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:19:52 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 19:56:07 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	if (new != NULL)
		new->next = *lst;
	*lst = new;
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
	while (p != NULL)
	{
		temp = p->next;
		free(p);
		p = temp;
	}

	return (0);
}
*/