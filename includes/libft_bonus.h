/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:51:07 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/13 22:25:49 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Bonus part
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
