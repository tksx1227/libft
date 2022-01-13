/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:09:50 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/13 15:41:31 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (p == NULL)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

/*
int	main(void)
{
	char s[] = "Hello.";

	t_list *res = ft_lstnew(s);
	printf("Content: \"%s\"\n", (char *)res->content);
	printf("Next   : %p\n", res->next);
	free(res);

	return (0);
}
*/
