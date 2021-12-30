/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:17:16 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 18:32:15 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "Hello";
	char s2[] = "wow";
	int n = 5;

	printf("---------- strncpy ----------\n");
	char s3[] = "This is original text.";
	printf("Before: %s\n", s3);
	strncpy(s3, s1, n);
	printf("After1: %s\n", s3);
	strncpy(s3, s2, n);
	printf("After2: %s\n", s3);
	
	printf("---------- ft_strncpy ----------\n");
	char s4[] = "This is original text.";
	printf("Before: %s\n", s4);
	ft_strncpy(s4, s1, n);
	printf("After1: %s\n", s4);
	ft_strncpy(s4, s2, n);
	printf("After2: %s\n", s4);
	return (0);
}
*/
