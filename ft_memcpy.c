/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:52:08 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 00:26:00 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p1;
	const char	*p2;

	p1 = (char *)dest;
	p2 = (const char *)src;
	while (n-- > 0)
	{
		*(p1 + n) = *(p2 + n);
	}
	return (dest);
}
