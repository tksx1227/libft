/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:51:55 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/08 17:11:44 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	// Parameters
	int n = 4;
	int offset = 3;

	printf("---------- bzero ----------\n");
	char s1[] = "abcdefghi";

	printf("Before: %s\n", s1);
	bzero(s1 + offset, n);
	printf("After: ");
	for (int i = 0; i < 10; i++)
		printf("0x%02X ", s1[i]);
	printf("\n");

	printf("---------- bzero ----------\n");
	char s2[] = "abcdefghi";

	printf("Before: %s\n", s2);
	ft_bzero(s2 + offset, n);
	printf("After: ");
	for (int i = 0; i < 10; i++)
		printf("0x%02X ", s2[i]);
	printf("\n");
	return (0);
}
*/
