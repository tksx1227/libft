/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:30:48 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/08 19:58:01 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*
int	main(void)
{
	// Parameters
	char src[] = "Hello World!!";
	char dest[128];
	size_t n1= 5;
	size_t n2 = 0;
	size_t n3 = 100;

	printf("---------- strlcpy ----------\n");
	size_t res1 = strlcpy(dest, src, n1);
	printf("size = %ld, dest: \"%s\", result: %ld\n", n1, dest, res1);
	size_t res2 = strlcpy(dest, src, n2);
	printf("size = %ld, dest: \"%s\", result: %ld\n", n2, dest, res2);
	size_t res3 = strlcpy(dest, src, n3);
	printf("size = %ld, dest: \"%s\", result: %ld\n", n3, dest, res3);

	printf("---------- ft_strlcpy ----------\n");
	size_t res4 = ft_strlcpy(dest, src, n1);
	printf("size = %ld, dest: \"%s\", result: %ld\n", n1, dest, res4);
	size_t res5 = ft_strlcpy(dest, src, n2);
	printf("size = %ld, dest: \"%s\", result: %ld\n", n2, dest, res5);
	size_t res6 = ft_strlcpy(dest, src, n3);
	printf("size = %ld, dest: \"%s\", result: %ld\n", n3, dest, res6);

	return (0);
}
*/
