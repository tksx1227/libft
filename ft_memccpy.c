/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:13:00 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/29 17:08:06 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*p1;
	const char	*p2;

	i = 0;
	p1 = (char *)dest;
	p2 = (const char *)src;
	while (i < n)
	{
		*(p1 + i) = *(p2 + i);
		if (*(p2 + i) == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	// Parameters
	char paramChar = 'd';
	int cpySize = 7;

	printf("---------- memccpy ----------\n");
	char s1[] = "abcdefghij";
	char s2[] = "0123456789";
	char *return1;

	printf("Before: %s\n", s2);
	return1 = memccpy(s2, s1, paramChar, cpySize);
	printf("After : %s\n", s2);
	printf("Return: %s\n", return1);
	
	printf("---------- ft_memccpy ----------\n");
	char s3[] = "abcdefghij";
	char s4[] = "0123456789";
	char *return2;

	printf("Before: %s\n", s4);
	return2 = ft_memccpy(s4, s3, paramChar, cpySize);
	printf("After : %s\n", s4);
	printf("Return: %s\n", return2);

	return (0);
}
*/
