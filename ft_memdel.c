/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:45:35 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 23:55:46 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

/*
int	main(void)
{
	char *p1 = (char *)ft_memalloc(sizeof(char));
	char **p2 = &p1;

	printf("Before: %p\n", *p2);
	ft_memdel((void **)p2);
	printf("After : %p\n", *p2);
	return (0);
}
*/
