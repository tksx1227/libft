/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:58:16 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/20 00:05:20 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	i = 0;
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	while (i < n)
	{
		p1[n - i - 1] = p2[n - i - 1];
		i++;
	}
	return (dest);
}
