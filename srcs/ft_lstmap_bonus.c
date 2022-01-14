/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:29:53 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 14:34:34 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	if (lst == NULL || f == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&head, temp);
	}
	return (head);
}

/*
static void	print_list_content(t_list *lst)
{
	for (int i = 0; lst != NULL; i++)
	{
		printf("[%d] Content: %d\n", i, *(int *)lst->content);
		lst = lst->next;
	}
}

static void	*do_double(void *content)
{
	int	*p = (int *)malloc(sizeof(int));
	if (p == NULL)
		return (NULL);
	*p = *(int *)content * 2;
	return ((void *)p);
}

int	main(void)
{
	int	array[4] = {1, 2, 3, 4};
	t_list *lst = ft_lstnew(array);
	t_list *lst2 = ft_lstnew(array + 1);
	t_list *lst3 = ft_lstnew(array + 2);
	t_list *lst4 = ft_lstnew(array + 3);

	ft_lstadd_back(&lst, lst2);
	ft_lstadd_back(&lst, lst3);
	ft_lstadd_back(&lst, lst4);

	printf("---------- Original(Before) ----------\n");
	print_list_content(lst);
	t_list *newlst = ft_lstmap(lst, &do_double, free);

	printf("---------- Original(After) ----------\n");
	print_list_content(lst);

	printf("---------- New ----------\n");
	print_list_content(newlst);

	ft_lstclear(&lst, NULL);
	ft_lstclear(&newlst, free);

	return (0);
}
*/
