/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:33:11 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/15 12:27:37 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "ABCDeF";
	char s2[] = "ABCDEF";
	int n = 6;

	printf("---------- memcmp ----------\n");
	int res1 = memcmp(s1, s2, n);
	printf("memcmp(\"%s\", \"%s\", %d) = %d\n", s1, s2, n, res1);

	printf("---------- ft_memcmp ----------\n");
	int res2 = ft_memcmp(s1, s2, n);
	printf("ft_memcmp(\"%s\", \"%s\", %d) = %d\n", s1, s2, n, res2);
	return (0);
}
*/
