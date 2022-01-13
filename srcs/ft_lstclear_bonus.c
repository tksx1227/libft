/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:52:22 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 00:54:37 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	p = *lst;
	while (p != NULL)
	{
		temp = p->next;
		del(p->content);
		free(p);
		p = temp;
	}
	*lst = NULL;
}
