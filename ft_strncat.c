/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttomori <ttomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:51:24 by ttomori           #+#    #+#             */
/*   Updated: 2021/12/30 19:12:59 by ttomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = dest;
	while (*p != '\0')
		p++;
	while (i < n)
	{
		p[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
	}
	p[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	// Parameters
	char s1[] = "1234567";
	char s2[] = "ABC";
	int n = 4;

	printf("---------- strncat ----------\n");
	char s3[128] = "Plane";
	printf("Before: %s\n", s3);
	printf("strncat(\"%s\", \"%s\", %d) = ", s3, s1, n); 
	printf("%s\n", strncat(s3, s1, n));
	printf("strncat(\"%s\", \"%s\", %d) = ", s3, s2, n); 
	printf("%s\n", strncat(s3, s2, n));
	
	printf("---------- ft_strncat ----------\n");
	char s4[128] = "Plane";
	printf("Before: %s\n", s4);
	printf("ft_strncat(\"%s\", \"%s\", %d) = ", s4, s1, n); 
	printf("%s\n", ft_strncat(s4, s1, n));
	printf("ft_strncat(\"%s\", \"%s\", %d) = ", s4, s2, n); 
	printf("%s\n", ft_strncat(s4, s2, n));

	return (0);
}
*/
