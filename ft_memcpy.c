/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:52:08 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 00:37:16 by ttomori          ###   ########.fr       */
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
		*p1++ = *p2++;
	return (dest);
}

/*
int	main(void)
{
	char	s1[] = {1, 1, 1, 1, 1, 1, 1};
	char	s2[] = "ab\0cde";

	for (int i = 0; i < 7; i++)
		printf("0x%08x ", s1[i]);
	printf("\n");
	ft_memcpy(s1, s2, 5);
	for (int i = 0; i < 7; i++)
		printf("0x%08x ", s1[i]);
	printf("\n");
	return (0);
}
*/
