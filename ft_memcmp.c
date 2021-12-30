/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:33:11 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 15:47:37 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
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
