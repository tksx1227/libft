/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:21:01 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/10 23:52:44 by ttomori          ###   ########.fr       */
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
		if (p[i] == c)
			return (p + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	// Parameters
	char s[] = "Hello World !!!";
	char c1 = 'W';
	char c2 = 'r';
	int n = 7;

	printf("---------- memchr ----------\n");
	char *res1 = memchr(s, c1, n);
	char *res2 = memchr(s, c2, n);
	printf("str = %s, n = %d\n", s, n);
	printf("char1 = %c, result = %s\n", c1, res1);
	printf("char2 = %c, result = %s\n", c2, res2);
	
	printf("---------- ft_memchr ----------\n");
	char *res3 = ft_memchr(s, c1, n);
	char *res4 = ft_memchr(s, c2, n);
	printf("str = %s, n = %d\n", s, n);
	printf("char1 = %c, result = %s\n", c1, res3);
	printf("char2 = %c, result = %s\n", c2, res4);
	
	return (0);
}
*/
