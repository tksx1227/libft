/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:58:16 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/16 01:36:39 by ttomori          ###   ########.fr       */
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

/*
int	main(void)
{
	// Parameters
	int offset_dest = 0;
	int offset_src = 2;
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
