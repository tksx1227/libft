/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:52:04 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 17:19:22 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*p;

	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (n-- > 0)
		*(p + n) = uc;
	return (s);
}

/*
int	main(void)
{
	// Parameters
	char c = '*';
	int n = 4;
	int offset = 3;
	
	printf("---------- memset ----------\n");
	char s1[] = "0123456789";
	char *res1;

	printf("Before: %s\n", s1);
	res1 = memset(s1 + offset, c, n);
	printf("After : %s\n", s1);
	printf("Return: %s\n", res1);
	
	printf("----------ft_memset ----------\n");
	char s2[] = "0123456789";
	char *res2;

	printf("Before: %s\n", s2);
	res2 = ft_memset(s2 + offset, c, n);
	printf("After : %s\n", s2);
	printf("Return: %s\n", res2);
	
	return (0);
}
*/
