/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:20:31 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/14 14:25:52 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
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

static void	do_double(void *content)
{
	*(int *)content *= 2;
}

int	main(void)
{
	int	array[4] = {1, 2, 3, 4};
	t_list *lst1 = ft_lstnew(array);
	t_list *lst2 = ft_lstnew(array + 1);
	t_list *lst3 = ft_lstnew(array + 2);
	t_list *lst4 = ft_lstnew(array + 3);

	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);

	printf("---------- Before ----------\n");
	print_list_content(lst1);

	printf("---------- After ----------\n");
	ft_lstiter(lst1, &do_double);
	print_list_content(lst1);

	printf("---------- Error check ----------\n");
	ft_lstiter(lst1, NULL);
	ft_lstiter(NULL, &do_double);
	print_list_content(lst1);

	ft_lstclear(&lst1, NULL);

	return (0);
}
*/
