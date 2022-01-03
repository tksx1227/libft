/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:34:34 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/03 23:44:07 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	return (malloc(size));
}

/*
int	main(void)
{
	size_t size = sizeof(int);
	int	*p;

	printf("size = %ld\n", size);
	p = (int *)ft_memalloc(size);
	*p = 10;
	printf("Address: %p\n", p);
	printf("Value: %d\n", *p);
	free(p);
	return (0);
}
*/
