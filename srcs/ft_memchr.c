/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:21:01 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:04:24 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	target;

	i = 0;
	p = (unsigned char *)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == target)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
