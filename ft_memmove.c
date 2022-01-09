/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:58:16 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/09 10:47:28 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	if (p1 < p2)
		while (n-- > 0)
			*p1++ = *p2++;
	else
		while (n-- > 0)
			*(p1 + n) = *(p2 + n);
	return (dest);
}

/*
int	main(void)
{
	// Parameters
	int offset_dest = 2;
	int offset_src = 0;
	int n = 5;

	printf("---------- memmove ----------\n");
	char s1[] = "ABCDEFGHIJ";
	char *res1;

	printf("Before: %s\n", s1);
	res1 = memmove(s1 + offset_dest, s1 + offset_src, n);
	printf("After : %s\n", s1);
	printf("Return: %s\n", res1);

	printf("---------- ft_memmove ----------\n");
	char s2[] = "ABCDEFGHIJ";
	char *res2;

	printf("Before: %s\n", s2);
	res2 = ft_memmove(s2 + offset_dest, s2 + offset_src, n);
	printf("After : %s\n", s2);
	printf("Return: %s\n", res2);
	return (0);
}
*/
