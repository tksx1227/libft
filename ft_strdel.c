/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:24:53 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/04 00:29:29 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

/*
int	main(void)
{
	char *p1 = ft_strnew(sizeof(char));
	char **p2 = &p1;

	printf("Before: %p\n", *p2);
	ft_strdel(p2);
	printf("After : %p\n", *p2);
	return (0);
}
*/
