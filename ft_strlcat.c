/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:32:00 by ttomori           #+#    #+#             */
/*   Updated: 2022/01/08 17:39:07 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (i + dstlen + 1 < size && src[i] != '\0')
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	if (size < dstlen)
		return (srclen + size);
	return (dstlen + srclen);
}

/*
int	main(void)
{
	// Parameters
	char s[] = " wow wow";
	size_t n1 = 9;
	size_t n2 = 0;
	size_t n3 = 100;

	printf("---------- strlcat ----------\n");
	char dest1[128] = "--->";
	size_t res1 = strlcat(dest1, s, n1);
	printf("size: %3ld, dest: \"%s\", res: %ld\n", n1, dest1, res1);
	size_t res2 = strlcat(dest1, s, n2);
	printf("size: %3ld, dest: \"%s\", res: %ld\n", n2, dest1, res2);
	size_t res3 = strlcat(dest1, s, n3);
	printf("size: %3ld, dest: \"%s\", res: %ld\n", n3, dest1, res3);

	printf("---------- ft_strlcat ----------\n");
	char dest2[128] = "--->";
	size_t res4 = ft_strlcat(dest2, s, n1);
	printf("size: %3ld, dest: \"%s\", res: %ld\n", n1, dest2, res4);
	size_t res5 = ft_strlcat(dest2, s, n2);
	printf("size: %3ld, dest: \"%s\", res: %ld\n", n2, dest2, res5);
	size_t res6 = ft_strlcat(dest2, s, n3);
	printf("size: %3ld, dest: \"%s\", res: %ld\n", n3, dest2, res6);

	return (0);
}
*/
