/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:52:08 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/10 19:05:21 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	// Parameters
	char src[] = "ab\0cdef";
	int n = 5;

	printf("---------- memcpy ----------\n");
	char s1[] = {1, 1, 1, 1, 1, 1, 1, 1};

	for (int i = 0; i < 8; i++)
		printf("0x%02X ", s1[i]);
	printf("\n");
	memcpy(s1, src, n);
	for (int i = 0; i < 8; i++)
		printf("0x%02x ", s1[i]);
	printf("\n");

	printf("---------- ft_memcpy ----------\n");
	char s2[] = {1, 1, 1, 1, 1, 1, 1, 1};

	for (int i = 0; i < 8; i++)
		printf("0x%02X ", s2[i]);
	printf("\n");
	memcpy(s2, src, n);
	for (int i = 0; i < 8; i++)
		printf("0x%02x ", s2[i]);
	printf("\n");
	return (0);
}
*/
