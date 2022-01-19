/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:52:04 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:05:25 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*p;

	i = 0;
	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = uc;
		i++;
	}
	return (s);
}
