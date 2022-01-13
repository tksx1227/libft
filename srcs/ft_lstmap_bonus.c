/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:29:53 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 00:55:00 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	**pp;

	if (f == NULL)
		return (NULL);
	pp = &p;
	while (lst != NULL)
	{
		p = ft_lstnew(f(lst->content));
		if (p == NULL)
			return (NULL);
		if (del != NULL)
			del(lst->content);
		lst = lst->next;
		p = p->next;
	}
	return (*pp);
}
